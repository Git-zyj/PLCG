/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243350
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (-((+(78574363)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                arr_7 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_5 [i_2] [i_2]))))));
                arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (7386779595609618916ULL)));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2]))));
                arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 16446499524421234158ULL))));
            }
            var_21 = ((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) (_Bool)1)));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0])))))));
            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)-19198)) : (((/* implicit */int) (short)1224))))) ? ((-(((/* implicit */int) arr_5 [i_0] [1LL])))) : (((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_12 [i_0] [i_3] = (!(((/* implicit */_Bool) 4294967273U)));
            arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1206)) ? (902439608216158536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1224)))));
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_3] [i_3]))));
            arr_14 [10LL] [i_3] = ((/* implicit */signed char) (~((+(16446499524421234158ULL)))));
            arr_15 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_3] [i_3])) - (((/* implicit */int) arr_2 [i_3] [i_3]))));
        }
    }
    var_25 = ((/* implicit */_Bool) var_13);
    var_26 = ((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) var_15)))))) * (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) 902439608216158536ULL)))))))));
}
