/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244360
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (3457037604U)))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 837929689U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_2))))) : (837929705U)));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((8689973366340340744LL) != (((/* implicit */long long int) ((/* implicit */int) (short)26965)))))) + (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((8689973366340340727LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)79)))))) || (((((/* implicit */int) (short)-26966)) >= (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) != ((+(((/* implicit */int) (unsigned short)13726)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_3), (arr_1 [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)32251)) ? (1286551469U) : (3457037585U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_0 [i_1] [i_3])))))) : (min((((/* implicit */unsigned long long int) ((_Bool) arr_0 [4] [i_1]))), (12147199635465491046ULL)))));
                        var_18 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (max((((/* implicit */unsigned int) (short)0)), (1286551469U)))))));
                        var_19 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [(signed char)11]);
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) != (((((/* implicit */int) arr_7 [i_1] [i_2] [(signed char)4])) | (((/* implicit */int) arr_7 [i_0] [(signed char)13] [i_2]))))))), ((-(arr_4 [i_1])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)7]))) > (arr_9 [i_0] [i_1] [i_2] [i_4])))) * (min((((/* implicit */int) (unsigned short)36227)), (arr_10 [i_2] [i_2] [i_2]))))));
                        arr_15 [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)32232)));
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] = ((/* implicit */short) ((unsigned int) 3008415827U));
                        var_21 += ((/* implicit */signed char) ((((/* implicit */long long int) arr_13 [i_0])) * (min((((/* implicit */long long int) 1286551480U)), (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (63050394783186944LL)))))));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((610854937), (((/* implicit */int) (signed char)63))))) ? (14216372854676412268ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))));
                }
            } 
        } 
    } 
}
