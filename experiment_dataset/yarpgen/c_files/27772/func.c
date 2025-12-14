/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27772
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
    var_17 = ((/* implicit */signed char) var_10);
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))))), (var_9))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_1 [(signed char)3] [i_0])))), (var_13))) / (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-7558)), (7))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(min((((/* implicit */int) var_9)), (arr_4 [(unsigned short)12]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_21 |= ((/* implicit */int) arr_6 [(signed char)0]);
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                var_22 = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_2] [i_5] [i_4] [i_5] [(signed char)1] [i_4] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) : (var_10))), (((/* implicit */long long int) arr_1 [i_1 + 3] [i_1 + 3])))), (((/* implicit */long long int) (signed char)-72))));
                            var_23 = ((/* implicit */short) ((max((arr_4 [i_1]), (((/* implicit */int) ((((/* implicit */int) var_8)) > (arr_11 [i_1] [i_1] [i_2 - 2] [i_4])))))) >= ((-(((/* implicit */int) (unsigned short)44962))))));
                            var_24 += ((/* implicit */unsigned short) min((var_14), (max((((/* implicit */int) arr_0 [i_1 - 3])), (arr_4 [i_5])))));
                        }
                    } 
                } 
                var_25 = min(((((+(arr_10 [i_2]))) / (var_13))), (((/* implicit */unsigned long long int) var_14)));
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_26 = ((/* implicit */signed char) min((arr_7 [i_6] [i_1]), (((/* implicit */int) ((unsigned short) var_2)))));
            var_27 = ((/* implicit */int) max((var_27), ((+(min((arr_11 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_0)))))))))));
            arr_20 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [(signed char)11] [(_Bool)1]), (((/* implicit */unsigned int) arr_7 [i_1 - 3] [i_6]))))) ? (((/* implicit */int) arr_12 [8] [i_1] [i_1] [i_1])) : ((~(arr_7 [i_1] [i_6])))));
            arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 2] [i_1 + 1] [i_1] [(short)11] [(unsigned char)9]))) : (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7237))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned short)11518))))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)1)), (arr_7 [i_6] [i_6]))))))));
            var_28 = max((max((arr_10 [i_1 + 3]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) 652438859U)));
        }
        arr_22 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)66))))) && (((/* implicit */_Bool) max((15935397688464317768ULL), (((/* implicit */unsigned long long int) 4294967284U))))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_0 [8LL]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15380250791329361052ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_8]))))), (arr_24 [20] [i_7])))));
            var_31 = ((/* implicit */unsigned char) min(((-((((_Bool)0) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))))))), (((/* implicit */long long int) (_Bool)0))));
        }
        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7]))) > (var_15))))));
        var_33 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_25 [(signed char)2])), (arr_23 [3] [(unsigned short)13])))) ? (((/* implicit */long long int) arr_23 [i_7] [i_7])) : (min((var_16), (((/* implicit */long long int) (unsigned char)58)))))), (((/* implicit */long long int) min((var_15), (((/* implicit */unsigned int) (unsigned char)28)))))));
    }
    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
    {
        var_34 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) arr_1 [i_9] [i_9 + 3])) / (((arr_28 [i_9 + 1] [i_9]) ? (2770474236458404299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 + 1]))))))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) 1288390015)), (var_3))))))));
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (unsigned char)227)))) : (arr_37 [i_9] [i_11] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [4] [(unsigned short)20] [i_12]))) : (((unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) arr_27 [i_10]))))))))));
                        arr_39 [i_9] [i_10] [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9 + 2] [i_12 - 3] [i_12 - 1] [i_12]))))), (arr_36 [19ULL] [i_11])));
                        var_36 += (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)253))))), (var_0))));
                    }
                } 
            } 
        } 
        arr_40 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
        var_37 *= ((/* implicit */unsigned long long int) min(((+((+(((/* implicit */int) (unsigned short)39642)))))), ((-((+(((/* implicit */int) arr_29 [i_9]))))))));
    }
}
