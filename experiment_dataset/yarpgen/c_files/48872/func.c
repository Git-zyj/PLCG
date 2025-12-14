/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48872
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)88))))) >= (min((var_15), (((/* implicit */unsigned long long int) (unsigned short)43464)))))))));
                                var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_3 [i_0]))))), ((+(((/* implicit */int) var_16))))));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [(_Bool)1] [i_1] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (short)-15389))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) * (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_10 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0]))))) != (((var_5) << (((((/* implicit */int) (unsigned char)165)) - (139)))))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_9))))), ((+(var_11)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_16)))));
                            arr_20 [i_6] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((var_13) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) (unsigned short)52944))))))) ? (((/* implicit */int) max((((short) (unsigned short)52944)), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8812564552050872720ULL)) ? (var_3) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_5] [(signed char)17] [i_0] [i_6]))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)13))))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42))))) ? (min((((/* implicit */unsigned int) (unsigned char)7)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_17)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3))))))))));
            }
        } 
    } 
    var_22 = var_14;
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 3) 
    {
        for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            arr_32 [i_10] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)5));
                            arr_33 [i_7] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) arr_28 [i_7 + 1] [i_8]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (short i_13 = 2; i_13 < 21; i_13 += 2) 
                        {
                            {
                                arr_41 [i_8] [i_11] [i_7] = ((/* implicit */unsigned short) max((2097151U), (((((unsigned int) var_2)) - (min((((/* implicit */unsigned int) (unsigned short)40484)), (var_14)))))));
                                var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_34 [(signed char)2] [i_11] [i_11]), ((-(var_5)))))) ? (arr_23 [10U]) : (((unsigned int) -1))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_35 [i_7]))));
                            }
                        } 
                    } 
                } 
                arr_42 [i_7 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_29 [i_8] [i_8 + 2] [i_7] [i_8])))), (max((((/* implicit */unsigned long long int) (short)-32739)), (arr_30 [i_8] [i_8] [i_7 + 1] [i_7 - 1] [(unsigned char)19] [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_7 - 1] [i_7 - 1] [i_8] [i_8] [i_8]))) : (min((((/* implicit */unsigned int) (!((_Bool)0)))), (((arr_29 [i_8] [i_8] [i_8] [(signed char)14]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40484)))))))));
            }
        } 
    } 
}
