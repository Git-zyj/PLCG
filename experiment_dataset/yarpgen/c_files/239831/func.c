/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239831
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
    var_12 = ((/* implicit */short) ((_Bool) var_8));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_10 [i_0] [(signed char)2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (+(((long long int) ((long long int) 1893276635U)))));
                    arr_11 [i_0 - 1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8732857955364452487ULL)) ? (2147483647) : (0)))))))) != ((-(arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2])))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */short) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_3]))))), (max((((/* implicit */unsigned int) var_7)), (var_4))))), (((/* implicit */unsigned int) (unsigned short)0))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_6))));
                    arr_13 [i_3] [(unsigned short)10] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (651886887U))))))), (var_9)));
                }
                var_14 = ((/* implicit */signed char) min((var_14), (var_8)));
            }
            arr_14 [i_0 + 2] [(unsigned char)1] [i_1] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_10))));
            var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (4204564656305156778LL) : (4204564656305156806LL))))), (min((((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)-96)))), (((((/* implicit */_Bool) arr_2 [i_4] [i_0])) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) arr_15 [9ULL] [9ULL]))))))));
        }
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            var_17 = ((/* implicit */long long int) (unsigned char)28);
            var_18 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) 4294967277U)))) ? (((int) var_8)) : (((((/* implicit */int) arr_3 [(unsigned char)4] [i_5] [i_0])) + (((/* implicit */int) (signed char)-8)))))) * (((/* implicit */int) (((+(0LL))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)76))) || (((/* implicit */_Bool) var_1)))))) > ((+(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5] [i_7]))))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (short)-6690))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_28 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (unsigned short)41557)))) : (((var_5) ? (((/* implicit */int) arr_19 [i_8] [i_0 + 1] [i_0])) : (((/* implicit */int) var_11))))));
            var_21 += (unsigned short)65472;
        }
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)15] [i_0 + 1])) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */int) (signed char)-110)) - (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63527))) ^ (3643080415U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) != (((/* implicit */unsigned long long int) ((var_6) % (((/* implicit */int) var_1)))))))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_33 [i_0] [i_0 - 1] [5ULL] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1020)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (-768859210) : (((/* implicit */int) arr_25 [19] [i_9]))))))))));
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (min((arr_30 [i_0 + 1] [i_9] [i_10]), (arr_30 [i_0 + 2] [i_9] [i_9])))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) % (min((2U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))) ? (((/* implicit */int) ((1994549374932400931LL) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 2])))))) : ((-(((/* implicit */int) (unsigned short)9))))));
                }
            } 
        } 
    }
    var_25 = (~(-1382159036705648579LL));
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
}
