/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31697
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
    var_16 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) 3388527383U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-1303686494)))) == (((long long int) ((1239966594) >> (((12977002080241475259ULL) - (12977002080241475236ULL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) % (12977002080241475259ULL)))))) <= ((~(((/* implicit */int) ((5469741993468076357ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-28441)) ? (((/* implicit */int) (_Bool)1)) : (690936637))) ^ ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((5469741993468076365ULL) < (((/* implicit */unsigned long long int) 1176537700U)))))) : (((long long int) 5469741993468076364ULL))));
                    var_19 = ((/* implicit */long long int) (((((-(((/* implicit */int) (_Bool)1)))) == (-1076277717))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((short) ((_Bool) (_Bool)1))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */int) ((max((4603371996472517141ULL), (((/* implicit */unsigned long long int) 491520)))) & (((((/* implicit */_Bool) 3118429582U)) ? (16092272015473929151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63677)))))));
                    arr_11 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 3553801753U))) && (((/* implicit */_Bool) ((unsigned long long int) (short)18899)))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (unsigned short)65506)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned int) (short)-21800))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) 3553801761U)) : (13843372077237034475ULL))))))));
                }
                var_22 |= ((((/* implicit */_Bool) ((0U) >> ((((-(-1076277693))) - (1076277686)))))) ? (min(((-(0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)250)) : (1799126594)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48845))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((3525929905148933698LL) <= (((/* implicit */long long int) 268402688U)))) ? (((/* implicit */long long int) (~(612042441)))) : ((-(8744258650173951055LL))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0] [16] = (~(((((/* implicit */int) (unsigned short)10)) + (((/* implicit */int) (_Bool)1)))));
                            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2206620095U)) ? (2088347208U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))))))) ? (((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)114)))) & (((/* implicit */int) ((short) (unsigned short)17474))))) : (((/* implicit */int) ((_Bool) -1799126595)))));
                            arr_18 [20] [(unsigned short)9] [i_1] [i_4] [i_5] [(unsigned short)9] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) 1799126602)) != (4U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_12))))));
}
