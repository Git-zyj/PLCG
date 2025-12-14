/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37137
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
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_10 [i_0] [0] [i_2] = ((/* implicit */long long int) ((arr_6 [1] [i_0]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) min(((_Bool)0), (arr_6 [i_0 - 3] [i_0 - 1]))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (_Bool)0);
                }
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_0] [i_3] |= ((/* implicit */long long int) ((signed char) var_13));
                    arr_16 [(unsigned char)23] [(unsigned char)23] [20ULL] [i_3] = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_3] [i_1] [i_0] [i_0 - 2])) : (arr_2 [3]))) > ((-(((/* implicit */int) var_4)))));
                    arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)4064))));
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_0] = min((min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_6 [i_1] [(_Bool)1])), ((unsigned short)61471)))), (max((var_7), (((/* implicit */unsigned int) (short)25)))))), (((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_12 [(unsigned char)8] [i_1] [(_Bool)1])))))));
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-26)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_6 [i_0] [i_1])) <= (((/* implicit */int) arr_0 [(_Bool)1])))) ? (arr_19 [i_1] [i_0 + 1] [i_0]) : (((((/* implicit */_Bool) arr_9 [i_0] [4LL] [i_0] [(_Bool)1])) ? (var_6) : (((/* implicit */int) var_16))))))));
                    arr_26 [i_1] [i_5] [i_5] [2U] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_0 [i_1])), (((((long long int) arr_3 [i_0] [i_1] [i_5])) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 281474976702464LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)127)))))))));
                }
                arr_27 [i_0] [i_1] &= min((min((8323072U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (unsigned short)65525)));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)127)) != (((/* implicit */int) (_Bool)1))))) : (var_11)));
}
