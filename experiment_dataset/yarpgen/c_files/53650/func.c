/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53650
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
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) (signed char)-23)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((min((min((arr_10 [i_0] [i_1 - 1] [i_2]), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) (signed char)-43)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)55323)) : (((/* implicit */int) (unsigned char)137))))))))));
                                var_19 |= ((/* implicit */long long int) (signed char)56);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((arr_3 [i_1 - 1] [i_0] [i_1 - 1]), (arr_3 [i_1 + 1] [i_0] [i_0])));
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), ((unsigned char)5)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6])), ((unsigned short)10212)));
                arr_20 [i_5] = ((/* implicit */short) max(((~(((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)91)))))), (((/* implicit */int) ((signed char) (unsigned short)10207)))));
                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) var_14)) ^ (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_16))))));
                var_23 = ((/* implicit */_Bool) var_15);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_25 [i_8] [i_5] [4LL] [i_5] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(var_4)))), (max((((/* implicit */unsigned int) (short)14804)), (var_16)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 3825969608U)) : (22LL)))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(short)1] [(short)1] [i_8]))))) : (((/* implicit */unsigned int) (-(-18769341)))))) : (arr_24 [2ULL] [i_6] [i_7] [i_8])));
                            arr_26 [i_5 - 1] [i_6] [i_5] [(signed char)14] [i_7] = ((/* implicit */long long int) (~(((int) (unsigned char)254))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) 4467570830351532032ULL)) ? (arr_23 [i_5 - 1] [i_5 - 1] [i_7] [i_5 + 1]) : (arr_23 [i_5 + 1] [9ULL] [i_7] [i_5 + 1]))), (((/* implicit */unsigned long long int) (-(arr_22 [i_7] [i_5 + 1] [i_7])))))))));
                            var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) var_15)) ? (((unsigned long long int) arr_4 [9U])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)6)))))), (max((((((/* implicit */unsigned long long int) var_14)) & (arr_10 [i_5] [i_7] [i_8]))), (var_15)))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((18446744073709551605ULL), (((/* implicit */unsigned long long int) var_11)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)55333), (((/* implicit */unsigned short) var_9)))))))))) == ((-(max((0U), (((/* implicit */unsigned int) (signed char)116))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
