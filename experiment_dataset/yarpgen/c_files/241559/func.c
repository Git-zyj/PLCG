/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241559
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
    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) var_7)))))) > (((unsigned long long int) (_Bool)1)))))) <= (min((((/* implicit */long long int) ((int) var_8))), (var_3)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_12 -= ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)246)))) * (((/* implicit */int) ((signed char) 15306343919726490271ULL)))));
        arr_5 [(unsigned short)10] = ((unsigned short) arr_3 [i_0 - 2]);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) ^ (((arr_1 [i_0]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_16 [i_3] [i_1] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_8 [i_1] [i_1]))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [(unsigned short)3] [i_2] [i_3]))))) ? (min(((-(((/* implicit */int) arr_8 [i_3] [(_Bool)1])))), (((/* implicit */int) arr_8 [i_1] [i_4 - 1])))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_4)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) (short)-3962)))))))));
                        arr_17 [(signed char)10] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_3] [i_3] [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1])))) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4]))) : (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) arr_14 [i_3] [(_Bool)1]))))) : (((((/* implicit */_Bool) (short)-8)) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [(signed char)13])))))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(min((min((var_3), (var_3))), (((/* implicit */long long int) (~(((/* implicit */int) (short)3970))))))))))));
                        arr_18 [i_2] [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (unsigned char)18);
                    }
                } 
            } 
        } 
        var_16 = ((_Bool) ((((/* implicit */long long int) 0)) & (var_3)));
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((int) arr_19 [i_8] [i_7]))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_5])), (arr_9 [i_5] [i_6] [i_5]))) : (((/* implicit */unsigned long long int) arr_7 [i_7])))));
                        arr_29 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_22 [8ULL] [i_6] [i_7])) ? ((((_Bool)1) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) (short)-2304)))) : ((+(((/* implicit */int) arr_10 [i_5]))))))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_23 [i_8] [i_7] [i_6]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_13 [0ULL] [i_9] [i_5]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 1) 
                    {
                        arr_39 [i_11] [i_11] [i_5] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((5264095985668413674ULL) << (((((/* implicit */int) arr_14 [i_9] [i_9 + 1])) + (32363)))))) || (((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_40 [i_5] [(unsigned char)3] [i_10] [i_11] [i_11] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))));
                    }
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) ((((((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_1))))) : (min((var_4), (((/* implicit */long long int) var_1)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)236)))) : (((int) var_6)))))));
}
