/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24954
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
    var_17 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (698645040)))), (var_16))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)24784)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_18 *= ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40752)) && (((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) var_11)));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_6 [i_0] [(short)2] [i_2] [i_0 - 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33547)))))));
                var_19 = min((((/* implicit */unsigned short) ((_Bool) (_Bool)1))), (min(((unsigned short)40752), (((/* implicit */unsigned short) (short)32767)))));
            }
            for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] = ((/* implicit */_Bool) max((min((arr_9 [i_5 + 1] [16ULL] [i_0] [i_0]), (arr_9 [i_5 + 1] [i_4 - 1] [i_3 + 1] [i_0 - 1]))), (((/* implicit */short) (unsigned char)140))));
                            var_20 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (unsigned short)40752))))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0 - 1] [i_0] [i_0] = (!(((((/* implicit */int) arr_16 [i_1 - 1])) >= (((/* implicit */int) (unsigned char)122)))));
                arr_20 [i_0] [13ULL] [i_0] = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_10)), (arr_16 [10ULL]))), (((/* implicit */unsigned short) (unsigned char)116))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)24763)) > (((/* implicit */int) (short)0))))) < (((((/* implicit */int) arr_7 [i_0] [i_1] [i_3])) & (((/* implicit */int) arr_17 [i_0] [i_3] [i_0] [i_0] [i_0])))))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) / (var_15))))));
            }
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9079256848778919936LL)) ? (1373438309) : (((/* implicit */int) (unsigned short)33548))));
            arr_21 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41745))) < ((+(-3679256636436864785LL)))))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_30 [(unsigned char)4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)33547), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-41)), ((unsigned char)67)))) && (((/* implicit */_Bool) (unsigned short)40752)))))));
                            arr_31 [i_0 - 2] [i_0 - 2] [i_0] [i_7] [i_8] = ((/* implicit */unsigned char) var_8);
                            var_22 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (!((_Bool)1)))))) / ((-(((/* implicit */int) (unsigned char)112))))));
                            arr_32 [i_0] [i_1] [18ULL] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_6) || (((/* implicit */_Bool) (short)32766))))), (((((/* implicit */_Bool) (short)-24)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2753))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) 1100714556)) : (17013897257950346634ULL)))))));
                        }
                    } 
                } 
            } 
        }
        arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1432846815759204969ULL)) ? (1953774441) : (((/* implicit */int) (signed char)0))));
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [i_0])) / (((/* implicit */int) var_9)))) >= (((/* implicit */int) min((arr_22 [i_0]), (arr_22 [i_0]))))));
        arr_35 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((-1953774441) >= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_28 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_3))));
    var_24 = ((/* implicit */short) var_13);
}
