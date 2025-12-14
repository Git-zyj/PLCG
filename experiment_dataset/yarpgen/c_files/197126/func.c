/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197126
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_11))));
                arr_5 [i_0] [(signed char)9] [i_0] = (+(((/* implicit */int) (signed char)-69)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [(unsigned short)1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_19))))) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))) + ((-(((((/* implicit */_Bool) var_4)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) var_12);
            var_22 = ((/* implicit */int) max((var_22), (((max((((/* implicit */int) (unsigned short)1731)), (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned short)36337)))))) | (((/* implicit */int) var_8))))));
            var_23 += ((/* implicit */short) ((int) arr_8 [(_Bool)1]));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 0LL)))))))));
        }
    }
    var_25 = ((unsigned char) ((short) ((((/* implicit */_Bool) 1667542358)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)229)))));
    var_26 = ((unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)10)))))));
}
