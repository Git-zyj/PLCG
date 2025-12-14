/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209588
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
    var_10 = ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
            arr_5 [(unsigned char)8] [(unsigned char)8] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_12 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                        var_13 -= ((/* implicit */long long int) arr_7 [2] [i_1 + 3]);
                    }
                } 
            } 
            arr_11 [i_0] [i_1 + 2] = (+(arr_6 [i_0] [i_0] [i_0]));
            arr_12 [(short)10] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_3);
        }
        var_14 = ((/* implicit */short) arr_7 [i_0] [i_0]);
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 3; i_6 < 12; i_6 += 2) 
            {
                for (int i_7 = 2; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min((1883563290U), (max((arr_18 [i_6 - 3] [i_6] [i_7 + 1]), (arr_18 [i_6 - 3] [i_6 - 3] [i_7 + 1])))));
                        arr_24 [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                        var_16 = ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]);
                        arr_25 [i_4] [i_4] [i_4] [(_Bool)1] = ((((/* implicit */_Bool) var_5)) ? (-1349672143) : (((/* implicit */int) (unsigned short)38033)));
                    }
                } 
            } 
        } 
        arr_26 [i_4] [i_4] = ((/* implicit */_Bool) min(((-(min((3908968978U), (1883563273U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_20 [i_4] [i_4]), (var_8)))))))));
        var_17 *= ((/* implicit */unsigned short) min((1349672142), (((/* implicit */int) var_0))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)192))))), ((+(min((18446744073709551585ULL), (((/* implicit */unsigned long long int) var_9)))))))))));
    }
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_19 = -1349672143;
        arr_31 [i_8] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned char) max(((signed char)80), (var_4)))), (arr_21 [i_8] [i_8] [i_8] [i_8] [12] [i_8])))), (arr_29 [i_8])));
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) 1504623051U);
    }
}
