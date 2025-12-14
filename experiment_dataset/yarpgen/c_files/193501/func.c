/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193501
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
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-8386)) : (((/* implicit */int) (short)2044))))) ? (var_11) : (((/* implicit */long long int) var_7))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) var_4);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 704369092237191751ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) max((var_14), (((/* implicit */short) arr_1 [i_0])))))));
        arr_5 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) arr_2 [(short)14] [i_0]))));
        var_22 = ((/* implicit */unsigned short) 17742374981472359865ULL);
        arr_6 [i_0] [17] |= (-(((max((((/* implicit */int) var_13)), (var_7))) >> (((((/* implicit */int) var_6)) - (15690))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((2031353259), (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), (max((((/* implicit */long long int) (-2147483647 - 1))), (((long long int) (unsigned short)65535))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_18 [(signed char)10] [i_2] [18LL] = ((/* implicit */long long int) var_5);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & ((+(arr_11 [i_1] [i_2])))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)50638)) ? (((((/* implicit */_Bool) ((var_7) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_14)))) : (-167246785))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((var_7) == (((/* implicit */int) var_16)))))))));
                            arr_21 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (short)2070)), (((arr_1 [i_1]) ? ((~(((/* implicit */int) (short)-9365)))) : (((/* implicit */int) var_2))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            {
                arr_28 [(unsigned short)12] [i_6] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (short)-255)), (((((/* implicit */_Bool) (short)-255)) ? (17742374981472359865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17397))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_29 [i_6] = ((/* implicit */short) max((var_6), (((/* implicit */unsigned short) (short)-255))));
                arr_30 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_10 [18LL] [i_6]), (var_14)))), ((-(((/* implicit */int) (short)-2044))))));
            }
        } 
    } 
}
