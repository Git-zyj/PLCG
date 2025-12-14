/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21968
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((short) min((-1164445574), (((/* implicit */int) (unsigned char)140)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 4; i_4 < 9; i_4 += 3) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_2] [(unsigned short)6] [i_4 + 3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(short)4] [(short)4] [i_2] [i_3] [(short)4] [i_3] [i_4])) && (((/* implicit */_Bool) arr_4 [i_1]))))) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned short)9642)) ? (((/* implicit */int) min(((unsigned short)55898), (((/* implicit */unsigned short) arr_12 [5] [i_4 + 2] [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1] [(short)10]))))) : (((/* implicit */int) (((_Bool)1) && (arr_5 [i_0] [(unsigned short)3] [(short)10] [(unsigned short)3]))))))));
                            var_18 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)119)))))) > ((~(max((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_4 - 2]), (((/* implicit */int) arr_1 [i_2]))))))));
                        }
                        for (int i_5 = 4; i_5 < 9; i_5 += 3) /* same iter space */
                        {
                            var_19 |= ((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2 + 1] [i_2] [i_3]);
                            arr_16 [i_5 - 1] [i_5 - 1] [(unsigned short)8] [(unsigned short)8] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1364599502046671803ULL)) ? (((/* implicit */int) (unsigned short)58448)) : (((/* implicit */int) arr_1 [i_5]))));
                            var_20 = ((/* implicit */signed char) (~(var_16)));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((arr_11 [(_Bool)1] [i_1] [i_2] [(signed char)0] [6ULL]) < (((/* implicit */int) (unsigned char)127)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) var_1))))) ? ((-(-1674042701))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) < (((/* implicit */int) (signed char)0)))))))) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */_Bool) (unsigned short)31422)) ? (10938317493206853545ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2 + 1])))))));
                        }
                        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)45))));
                        arr_17 [i_0] [i_1] [i_2] [(signed char)11] = ((/* implicit */unsigned long long int) var_12);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
}
