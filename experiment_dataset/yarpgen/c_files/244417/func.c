/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244417
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_0] [(unsigned char)16] = ((/* implicit */short) max(((-(var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1 + 2] [i_0])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_1 + 2] [i_1] [(unsigned char)6] = ((/* implicit */int) min(((-((~(var_0))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) min((var_1), (((/* implicit */short) var_12))))), (var_3))))));
                        arr_13 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */long long int) max((((856033832U) << (((arr_3 [i_0] [i_1 + 2]) - (6877925542785647451LL))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 2012862242U)) >= ((-(arr_9 [i_2]))))))));
                        arr_14 [i_0] [0] [i_2] [i_0] = (-(((/* implicit */int) arr_2 [i_0] [i_1 + 2])));
                        arr_15 [i_0] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_1] [1ULL]), (((/* implicit */unsigned long long int) var_12))))) ? ((-(arr_1 [(unsigned short)5]))) : (((/* implicit */unsigned long long int) (-(var_0)))))))));
                    }
                } 
            } 
            arr_16 [(signed char)8] [i_1] [11U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_4 [i_1 - 1] [i_1 + 2] [i_1 + 2]), (((/* implicit */unsigned int) -1139551931))))) != (9ULL)));
            arr_17 [i_1] [(unsigned short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 - 1] [i_1 + 1])))) ? (max((arr_7 [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 + 2] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_21 [i_0] [i_4] = ((/* implicit */unsigned int) 9194772913394061932ULL);
            arr_22 [i_0] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % (var_0))), (((/* implicit */long long int) ((signed char) arr_8 [i_0])))));
        }
        arr_23 [(unsigned short)8] = ((/* implicit */short) arr_19 [i_0] [i_0] [(unsigned short)12]);
        arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((5804623370810455402LL), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)0)))))))));
        arr_25 [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((arr_0 [14]) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned short)15] [i_0])) ? (((/* implicit */int) (unsigned short)48178)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [4]))))))))));
    }
    var_13 = ((/* implicit */int) var_6);
    var_14 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) -798142293))) : (var_2))));
}
