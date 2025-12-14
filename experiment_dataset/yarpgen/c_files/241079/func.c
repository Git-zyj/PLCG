/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241079
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13014)) ? (((/* implicit */int) (short)13014)) : (((/* implicit */int) (short)13014))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13014)) ? (((/* implicit */int) (short)-13011)) : (((/* implicit */int) (short)-13014))));
            var_17 += ((/* implicit */int) max((((((/* implicit */unsigned long long int) arr_5 [i_1] [(short)0])) >= ((+(var_6))))), ((!((!(((/* implicit */_Bool) (short)2032))))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_2] [i_2] [i_3] [i_4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13014))) : (var_0))))))));
                            var_19 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(short)7] [i_4]))) - (arr_4 [i_0] [i_2 + 1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) (short)-13014)) : (((/* implicit */int) var_4)))))));
                            var_20 = ((/* implicit */unsigned long long int) ((short) (unsigned short)15958));
                            var_21 = ((/* implicit */short) (+(min((arr_9 [i_2 - 1] [i_2 - 1] [i_3] [(signed char)2]), (((/* implicit */unsigned long long int) min((arr_1 [i_2]), (((/* implicit */long long int) (unsigned short)49585)))))))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_11 [2LL] [i_1]))) == (((/* implicit */int) min((arr_11 [i_0] [i_1]), (arr_11 [i_0] [i_1]))))));
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_19 [i_5 - 1] [i_7] [i_7]) : (arr_19 [i_5 + 2] [i_5] [i_6]))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_2 [i_7] [i_6] [i_0]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0))));
        }
        var_25 = ((/* implicit */unsigned long long int) var_9);
    }
    for (short i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
        var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) ((short) arr_27 [i_8]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0))))) : ((+(arr_27 [i_8 - 2]))))), (((/* implicit */long long int) ((_Bool) 0U)))));
        arr_28 [(_Bool)1] [i_8] = ((/* implicit */signed char) arr_26 [i_8]);
        arr_29 [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
        arr_30 [i_8] [i_8] = ((/* implicit */short) var_0);
    }
    /* LoopSeq 1 */
    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        arr_35 [i_9 + 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)1))))), (4294967293U)));
        var_28 = ((/* implicit */unsigned short) (~(1108307720798208ULL)));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_33 [i_9]))))))) ? (arr_31 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9])))));
    }
}
