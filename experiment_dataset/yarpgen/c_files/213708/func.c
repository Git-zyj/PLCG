/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213708
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) < ((-(((/* implicit */int) ((unsigned char) var_3)))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) * (((/* implicit */int) var_6))))) ? (var_4) : (((/* implicit */long long int) (-(4166702245U))))));
    var_12 = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) 4166702245U)) | (-5456902900825282628LL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_4 + 1] [i_2 - 1]));
                                arr_15 [i_0] [(unsigned short)14] [i_2] [i_0] [i_0] [i_0 + 2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0 + 1])) + (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_5))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)5))))) < ((+(10521135579992530404ULL))))))));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */unsigned int) (~(5456902900825282624LL)));
                }
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-20806))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -5456902900825282628LL)) ? (1106471552U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))) : (min((((var_4) + (arr_4 [i_0 - 1]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15246))))))))))));
                }
                var_17 -= ((/* implicit */unsigned char) min(((((+(((/* implicit */int) arr_2 [i_1])))) - (((((/* implicit */int) arr_5 [(signed char)7] [(signed char)7])) >> (((((/* implicit */int) (unsigned char)251)) - (236))))))), (((/* implicit */int) (unsigned char)5))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [(signed char)0] [i_0] [i_0] [i_7] [i_6] [(short)9] [(unsigned short)2] = ((/* implicit */_Bool) ((short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5)))))));
                                arr_29 [i_8] [i_0] [i_7] [i_7] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12573880285235518447ULL)) ? (498499145) : (((/* implicit */int) (unsigned char)251)))) < (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                } 
                var_18 = arr_1 [i_0] [i_0];
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)0)))))))));
            }
        } 
    } 
}
