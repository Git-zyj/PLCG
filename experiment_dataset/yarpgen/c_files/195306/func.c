/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195306
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 4043524697U))) ? (((((/* implicit */_Bool) ((short) var_13))) ? (var_7) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64248))))))) : (max((((/* implicit */unsigned long long int) var_9)), ((((_Bool)1) ? (13204273179631466115ULL) : (((/* implicit */unsigned long long int) 2905398592U))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (13205581978719580401ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) 1664716905560416162ULL);
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (16782027168149135453ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) (unsigned short)40904)))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (16782027168149135453ULL) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1664716905560416156ULL)) ? (arr_2 [i_0]) : (16782027168149135456ULL)));
        }
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [10U]) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [9U]))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (arr_2 [i_3]))) : (16782027168149135447ULL)));
            var_23 ^= ((/* implicit */int) (unsigned short)39637);
        }
        var_24 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) arr_12 [i_4]);
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16782027168149135459ULL)) ? (arr_13 [i_4]) : (1664716905560416162ULL)))) ? (((((/* implicit */_Bool) 16782027168149135453ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_13 [i_4]))) : (((/* implicit */unsigned long long int) arr_12 [i_4]))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16782027168149135454ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_4])) : (arr_13 [i_4])));
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_26 [i_4] = ((/* implicit */short) arr_21 [i_4]);
                        arr_27 [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)65513))) ? (((/* implicit */long long int) 2147483647)) : (((long long int) 16782027168149135459ULL))));
                        var_25 = ((/* implicit */unsigned long long int) arr_25 [i_7 + 2] [i_4] [i_5] [i_4]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) (short)-23014));
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (max((((/* implicit */unsigned short) (unsigned char)144)), ((unsigned short)60022)))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (unsigned short i_10 = 1; i_10 < 15; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) ((long long int) min((5340342938875489050ULL), (((((/* implicit */_Bool) 1664716905560416162ULL)) ? (12170074028822700761ULL) : (16782027168149135459ULL))))));
                        var_29 = 7324727477814264044LL;
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) ((unsigned short) max((4240361267013929764ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2080))) : (-6515327558651737815LL)))))));
    }
}
