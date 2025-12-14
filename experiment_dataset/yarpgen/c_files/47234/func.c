/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47234
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_9))))) ^ (var_1))) * ((~(min((var_6), (3384363476U)))))));
    var_17 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0]))));
        arr_5 [i_0] = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_9 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]))));
            arr_10 [i_1] [i_0] [16] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (2005448531031534116LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                arr_15 [i_0] [i_0] [(signed char)24] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_0]))) - (arr_7 [i_2] [i_3])))));
                arr_16 [i_2] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0]);
            }
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                arr_21 [9LL] [13U] [i_4] [i_2] = ((/* implicit */int) (((_Bool)1) ? (-2005448531031534105LL) : (-5895354575930651143LL)));
                arr_22 [i_0] [i_4] [i_2] = ((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_2] [i_4]);
            }
            arr_23 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (+(arr_20 [i_0] [i_2] [i_2] [i_2])));
        }
    }
    var_18 = ((/* implicit */short) ((min((min((15589134236446550795ULL), (((/* implicit */unsigned long long int) var_3)))), (min((15589134236446550795ULL), (((/* implicit */unsigned long long int) var_10)))))) & (((var_3) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (min((2857609837263000830ULL), (((/* implicit */unsigned long long int) 2005448531031534129LL))))))));
    var_19 = ((/* implicit */unsigned long long int) min((min((min((var_7), (var_2))), (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) (signed char)-126))))))), (((/* implicit */int) var_3))));
}
