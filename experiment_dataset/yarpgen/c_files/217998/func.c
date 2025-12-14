/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217998
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((arr_10 [i_3] [i_2] [i_1] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [20] [i_2] [i_3]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [12] [i_1] [i_1] [(unsigned short)14]))) : (arr_7 [i_2] [15ULL] [i_2])))) ? (min((arr_2 [8ULL]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [8U] [i_3])), (arr_11 [(_Bool)1] [i_3] [i_2] [i_1] [i_0] [i_0]))))))) : (((((arr_9 [i_0] [i_1] [i_2]) | (arr_9 [8ULL] [i_1] [i_0]))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0])))))))));
                            arr_12 [i_3] [i_1] [19LL] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_0])), (min((((/* implicit */unsigned int) arr_11 [18LL] [i_2] [i_2] [i_1] [i_0] [i_0])), (arr_2 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [4U] [i_1] [i_0] [2LL])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (arr_5 [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [11LL]))) * (arr_9 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (4842774258488761811LL) : (((/* implicit */long long int) 134213632U))))) ? (4846015638920467827LL) : (-4842774258488761812LL))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [(signed char)7] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [16] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2]))) : (arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_10 [i_1] [(signed char)15] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_1])))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)8]))) + (arr_7 [i_1] [i_0] [i_0]))) + (((arr_10 [i_0] [i_0] [i_1] [i_0] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_4 [i_0])))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_0))))) ? (((var_0) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_3)))))))) ? (((/* implicit */int) ((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))))) : (((((4846015638920467825LL) < (-4842774258488761812LL))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
    var_14 = ((/* implicit */unsigned int) min(((unsigned char)190), ((unsigned char)65)));
}
