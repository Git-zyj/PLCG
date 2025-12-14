/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210956
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
    var_15 &= (!(((/* implicit */_Bool) min((8066451300853185818LL), (8066451300853185837LL)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (var_14)))) ? (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -4151018367397435551LL)) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24633))) | (8066451300853185818LL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 1])) ? (arr_4 [i_2 + 1]) : (arr_0 [i_2 + 1])));
                var_19 &= ((/* implicit */long long int) 16684300679879281217ULL);
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (1762443393830270398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))) ? (arr_4 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1])))));
                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_1])) : (((((/* implicit */_Bool) arr_10 [i_3] [0U] [i_1])) ? (((/* implicit */unsigned long long int) 8066451300853185818LL)) : (arr_0 [i_1])))));
                arr_11 [i_3] [i_2] = ((/* implicit */unsigned int) (~(((arr_3 [i_1]) - (6144539704583923026ULL)))));
            }
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
            {
                arr_14 [i_4] [i_1] = ((/* implicit */unsigned int) 7802798794557796828LL);
                var_22 &= ((/* implicit */short) (!(((/* implicit */_Bool) 5999007174881392020LL))));
                var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [8ULL] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [8U] [i_2])) : (arr_6 [i_2] [i_2])));
            }
            for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                arr_17 [i_5] [(short)11] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(3956884412U))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 1]))) < (((((/* implicit */_Bool) 8066451300853185818LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (8066451300853185825LL)))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_0 [i_2]))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16684300679879281218ULL)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)105))))))))));
            }
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1]))) : (5762495523763958332ULL)));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2])) ? (var_9) : (arr_6 [i_1] [i_1])))));
        }
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_7 [i_1]))));
        var_30 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_32 &= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_25 [i_6] [i_7] [i_7] [i_9])))) ? (((int) var_11)) : (((/* implicit */int) ((short) 594533032U)))))), (arr_26 [i_6] [i_7] [i_8] [i_9]));
                        arr_28 [i_6] [i_7] [(unsigned short)12] [i_9] = ((/* implicit */unsigned short) (((+(max((((/* implicit */long long int) (unsigned char)255)), (7630081070959096412LL))))) << (((max((((((/* implicit */long long int) var_10)) + (7630081070959096412LL))), ((-(-8707359257466715801LL))))) - (8707359257466715801LL)))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))) ? (((((/* implicit */_Bool) arr_22 [i_6] [i_9])) ? (arr_22 [i_6] [i_6]) : (arr_22 [i_7] [i_8]))) : (arr_22 [i_7] [i_8]))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_10]);
                            var_35 = ((/* implicit */long long int) arr_30 [i_6]);
                            arr_35 [10ULL] [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)215))));
                        }
                    } 
                } 
            } 
            var_36 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_6] [13LL]))));
            var_37 += ((/* implicit */unsigned int) ((unsigned long long int) -507654289653976982LL));
        }
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))))))));
    }
}
