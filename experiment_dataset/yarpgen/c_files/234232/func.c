/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234232
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0 + 3] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) var_4)) : (((((var_0) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))))) ? (arr_0 [i_0 + 3] [i_3 - 2]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [(_Bool)1] [16LL] [i_2] [i_2])), (var_11))))))));
                            var_16 = ((((/* implicit */_Bool) min((arr_4 [i_0 - 1] [i_3 + 1]), (arr_4 [i_0 + 1] [i_3 - 2])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3])));
                            arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_5 [i_3] [i_1])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9))))))));
                            var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_0 + 3] [i_3 + 1])))) || ((!(var_10)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5563709408896350397ULL)) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [8] [i_1] [i_1] [i_0 + 3])))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) ((signed char) 2907015694U))) ? ((~(arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((arr_1 [12LL]), (((/* implicit */long long int) var_6)))))))));
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 3])))))) * (max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1])))));
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) ((_Bool) var_12)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-3)), ((unsigned char)7)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-27)) * (((/* implicit */int) arr_2 [i_4]))))) : (min((var_6), (((/* implicit */unsigned int) var_13))))))) ? (min(((+(var_9))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-70))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))));
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_0 + 1])) ? (((((/* implicit */_Bool) 258948235U)) ? (((/* implicit */long long int) 2080694454U)) : (var_12))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (max((arr_6 [i_4]), (((/* implicit */unsigned long long int) arr_17 [i_0] [16ULL])))) : (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_3)))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((min((min((((/* implicit */long long int) (signed char)23)), (var_7))), (((/* implicit */long long int) var_14)))) | (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_14))))) : (max((var_12), (((/* implicit */long long int) 3103740630U))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (~((~((+(var_11)))))));
                    var_23 = ((/* implicit */unsigned int) (+((+(max((arr_15 [i_5] [i_5]), (((/* implicit */int) var_1))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((min((arr_15 [i_5] [i_5]), (((/* implicit */int) var_10)))) + (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) var_14)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 4; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_25 = (~(-7107470341711132421LL));
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((((/* implicit */int) var_10)) < (((/* implicit */int) arr_9 [i_11 + 1])))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_9] [i_8] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((var_0) | (((/* implicit */long long int) var_6)))))) / ((+(((((/* implicit */_Bool) 6520418364193309480ULL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_9])))))))));
                    arr_37 [i_5] = ((/* implicit */unsigned int) var_13);
                    var_28 = ((/* implicit */signed char) ((((((((/* implicit */int) var_13)) << (((/* implicit */int) (signed char)0)))) >> (((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) - (46))))) >> ((((~(arr_29 [i_9]))) - (5068867154058308698ULL)))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_13 + 1])) + (((/* implicit */int) arr_9 [i_13 + 1])))) + (((/* implicit */int) max((arr_9 [i_13 + 1]), (arr_9 [i_13 + 1]))))));
                    var_31 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_45 [8] [i_14] [i_13 + 1] [i_13 + 1])) == (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_0 [i_12] [i_12])))))))) * (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_2 [i_14])))))));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((_Bool) arr_5 [i_13 + 1] [i_13 + 1])) ? (arr_5 [i_13 + 1] [i_13 + 1]) : ((-(arr_5 [i_13 + 1] [i_13 + 1]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) ((arr_10 [i_13] [i_14]) ? (((/* implicit */int) arr_10 [i_13] [i_13])) : (((/* implicit */int) arr_10 [i_13] [i_13]))));
                        var_34 += ((/* implicit */unsigned long long int) (signed char)-28);
                    }
                }
            } 
        } 
    } 
}
