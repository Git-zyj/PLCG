/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241216
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_2 [i_0]))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 0U)) && (arr_3 [i_2] [i_2]))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 0LL))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) 29ULL))));
                            var_17 = ((/* implicit */signed char) ((unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_5]))) + (0ULL)))));
                            var_18 += ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_19 -= min((((((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) >> (((/* implicit */int) ((_Bool) (signed char)-43))))), (((((/* implicit */int) (signed char)42)) << (((var_7) - (3121667172U))))));
                                arr_30 [i_8] [i_8] [i_8] [i_10] [i_10] = ((/* implicit */_Bool) var_0);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14863050419402874334ULL)) ? ((+(((/* implicit */int) arr_19 [i_6] [i_7] [i_8])))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) (signed char)54)))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) - (arr_24 [(unsigned short)17] [i_7] [(unsigned short)17] [i_9] [i_10])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                                var_22 += ((/* implicit */signed char) ((min((var_7), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)5))))))) >= (4294967295U)));
                                arr_35 [i_8] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned int) (+(((3583693654306677281ULL) << (((-674352813) + (674352852)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            {
                                arr_40 [i_6] [i_7] [i_8] [i_8] [i_14] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 674352812))));
                                arr_41 [22ULL] [i_14] [i_8] [i_14] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2062334062)))))) % (min((17438310078829099640ULL), (((/* implicit */unsigned long long int) (short)-11062))))));
                                var_23 = ((/* implicit */unsigned int) (((~(arr_22 [i_8] [i_8] [i_6]))) != (((/* implicit */long long int) ((/* implicit */int) ((((var_11) || (((/* implicit */_Bool) 17438310078829099640ULL)))) || (((/* implicit */_Bool) var_0))))))));
                                arr_42 [i_13] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
