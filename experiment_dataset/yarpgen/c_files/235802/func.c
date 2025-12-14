/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235802
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57252))) == (((-588222427620314319LL) % (588222427620314319LL)))));
                var_20 = ((/* implicit */unsigned short) (~((+(arr_2 [i_0])))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? ((+(var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2874713301U)), (-588222427620314300LL)))), (((var_13) >> (((((/* implicit */int) arr_4 [i_0] [i_0])) - (18349))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-1)), (7847861344164992482ULL))))))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (1129924661U)));
                            var_23 = ((/* implicit */unsigned long long int) (~(-588222427620314319LL)));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4]))))), (arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] [i_3] [i_4]))))) * (arr_2 [i_2]));
                                arr_16 [i_2] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (unsigned short)29740))), (((int) var_13))))) || (((/* implicit */_Bool) max((var_4), (((unsigned long long int) arr_3 [i_0] [i_4] [i_2])))))));
                            }
                            for (int i_5 = 1; i_5 < 23; i_5 += 3) 
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */int) (+(arr_0 [i_0] [i_0])));
                                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) (unsigned char)11))) ? (((((/* implicit */_Bool) var_15)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) max((arr_0 [i_0] [i_3]), (((/* implicit */unsigned int) arr_17 [i_5] [i_0] [i_3] [i_3]))))))) >= (((/* implicit */long long int) ((unsigned int) (signed char)10)))));
                            }
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] [i_1] = -588222427620314305LL;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_25 = ((/* implicit */short) (_Bool)1);
        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_6]))));
        arr_23 [i_6] = ((/* implicit */short) (~(((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_7] [i_7] [4U] [i_7] [i_7]))))), ((-(arr_2 [i_7])))));
        arr_27 [i_7] [i_7] = ((/* implicit */int) var_5);
        arr_28 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */long long int) max((arr_7 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) arr_8 [i_7]))))) > (((((/* implicit */long long int) var_17)) + (var_0))))) ? ((+((-(arr_0 [i_7] [i_7]))))) : (arr_10 [i_7] [i_7] [i_7] [i_7])));
    }
}
