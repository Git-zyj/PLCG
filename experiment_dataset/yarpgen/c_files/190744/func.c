/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190744
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(0U)))) ? (9U) : (4294967286U))), (((unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2652))))));
                arr_7 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)56002);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    var_14 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_8 [(unsigned char)3] [2U] [i_1 + 1] [i_1])) - (28550))))))) : (((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((((/* implicit */int) arr_8 [(unsigned char)3] [2U] [i_1 + 1] [i_1])) - (28550))) + (47475)))))));
                    var_15 |= (((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)50888)))))) >= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 2] [16LL])) <= (((/* implicit */int) arr_3 [14LL] [(unsigned char)8]))))));
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_8 [(_Bool)1] [6U] [13LL] [i_1]), (var_10)))), (max((((/* implicit */unsigned int) (short)9204)), (2275919524U))))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [5]))));
                    arr_12 [i_1] [(unsigned char)15] [11U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_3 - 1] [i_1 - 1]))));
                }
                for (long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    var_18 = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_4 - 2] [(short)5] [i_1 + 1] [i_1])), (var_11)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_1] [15LL] [0ULL]), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_8))))))));
                    arr_17 [i_1] [(_Bool)0] [(_Bool)1] = min((((/* implicit */unsigned long long int) (+((((_Bool)1) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (min((min((((/* implicit */unsigned long long int) arr_2 [(unsigned short)16])), (var_4))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(signed char)1]))))))));
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (min((var_11), (((/* implicit */long long int) (signed char)(-127 - 1)))))))) ? (min((((((/* implicit */_Bool) arr_9 [i_1] [13U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_8 [(unsigned char)14] [(_Bool)1] [(unsigned short)18] [i_1])))) : (((/* implicit */int) var_12))));
                arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(unsigned short)0] [i_1 - 1] [14LL] [13LL]))))) >= ((-(((/* implicit */int) arr_16 [(_Bool)1] [i_1 - 1] [(unsigned short)12] [(_Bool)1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned long long int) 9U))));
}
