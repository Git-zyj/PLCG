/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196173
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4095LL)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (3480081436538579960ULL))) == (((/* implicit */unsigned long long int) max((-1869354013594589013LL), (((/* implicit */long long int) (signed char)19)))))))) : (((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (2627830421U)))) ? (((((/* implicit */_Bool) 1341405116230625415LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967294U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_2])))))), (((((/* implicit */_Bool) ((5663842591485408263ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : ((+(var_8)))))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) == ((+(((/* implicit */int) arr_5 [9U]))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0]))))), (max((((/* implicit */long long int) arr_1 [(signed char)4] [i_2])), (var_12))))) & (min((((((/* implicit */_Bool) var_7)) ? (-2229841914179645163LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0] [(unsigned char)6] [i_0])), (var_4)))) ? (min((var_12), (((/* implicit */long long int) arr_4 [4ULL] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) < (((unsigned long long int) 9223372036854775807LL))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    var_19 = arr_6 [i_3];
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) (signed char)-20)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_5])) : (((/* implicit */int) var_7))))) : (arr_12 [i_3 - 1] [i_3] [i_3 + 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_3 + 1] [i_3 - 3])), (((var_2) ? (((/* implicit */long long int) var_10)) : (var_4))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned int) var_12));
    var_21 = ((/* implicit */unsigned int) var_1);
}
