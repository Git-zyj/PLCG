/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196174
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)5643))))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_4))))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((+(((/* implicit */int) (short)2264)))) ^ (((/* implicit */int) var_8)))))));
            var_24 = (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (((unsigned long long int) (signed char)64)))));
        }
        for (short i_2 = 2; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */short) (~(min((min((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_2 + 1] [i_0]))), (((/* implicit */int) arr_3 [i_2] [i_0] [i_0]))))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                var_26 *= min((((/* implicit */unsigned long long int) (-(arr_1 [i_2 - 1] [i_0])))), (((unsigned long long int) var_3)));
                var_27 ^= ((/* implicit */unsigned int) min((((/* implicit */int) max((min((((/* implicit */unsigned short) arr_7 [i_0] [(short)10] [(unsigned short)2] [i_0])), ((unsigned short)33550))), (((/* implicit */unsigned short) min(((signed char)16), ((signed char)-11))))))), ((-(((/* implicit */int) (unsigned short)33542))))));
            }
            for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                var_28 = max(((-(2048U))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])));
                var_29 = ((/* implicit */unsigned short) ((signed char) (+(189490652373752434ULL))));
                /* LoopSeq 3 */
                for (short i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    arr_15 [i_0] [i_2 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_7 [i_0] [i_2] [i_4 + 1] [i_5 - 1])) - (2971))))), ((-(((/* implicit */int) arr_3 [(signed char)5] [i_2] [(signed char)10]))))));
                    arr_16 [i_5] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)23337))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [(signed char)7] [(unsigned short)7] [(unsigned short)7])) ? (16629015005707040216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_5 + 1] [(_Bool)1])))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_4 + 1] [i_5 + 1])) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33569)))))) : (((/* implicit */int) ((_Bool) 4015091603U)))));
                    var_30 += ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_6 [i_4 - 2] [i_4] [i_5])), (min((var_12), (((/* implicit */short) var_3))))))) != ((~(((/* implicit */int) ((_Bool) arr_1 [i_5] [i_0])))))));
                }
                for (short i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    var_31 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((max((12884901888ULL), (((/* implicit */unsigned long long int) (signed char)8)))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                    var_32 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_17 [i_4] [21LL] [i_6 - 1] [i_4])))), ((+(((/* implicit */int) arr_17 [i_4 - 2] [i_4] [i_6 - 1] [i_6 - 1]))))));
                }
                for (short i_7 = 2; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) 7123201449352114024LL))));
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_5 [i_7] [(signed char)1] [i_0]))));
                }
                var_35 += min((((/* implicit */unsigned short) ((_Bool) arr_3 [i_4 - 1] [i_2 - 2] [i_0]))), (((unsigned short) arr_20 [i_2 + 1] [i_4] [i_4 - 1] [i_4] [(short)12])));
            }
            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                var_36 |= min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24476))))), (7299607404927350941ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)104))) ? (((((/* implicit */int) arr_5 [i_8] [i_0] [i_0])) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-5182))))));
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [15LL] [i_0])))))));
                arr_26 [11] [i_2] [i_0] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_25 [i_2 - 2] [i_2 - 2] [i_8] [19LL]))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
                {
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [20ULL] [i_0] [i_0] &= ((/* implicit */short) arr_28 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 2]);
                            var_38 *= 0ULL;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 22; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-12))))) + ((+(arr_32 [i_12] [i_8] [i_2])))))));
                            arr_39 [i_0] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(8777828351428705558LL))))));
                            var_40 |= ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) ((arr_10 [i_2] [i_2] [i_0]) ? (((/* implicit */int) (unsigned short)60882)) : (((/* implicit */int) (signed char)127))))), (arr_25 [i_12] [i_12] [i_12] [i_12]))));
                            var_41 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) ((signed char) arr_34 [i_11 - 1] [13] [i_2 + 1] [i_0])))), (min((arr_22 [i_12] [i_12] [(_Bool)1] [i_11 - 1] [i_12] [i_11 - 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0] [i_8] [i_11] [i_0])))))))));
                        }
                    } 
                } 
            }
        }
        for (short i_13 = 2; i_13 < 22; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    {
                        arr_47 [i_14] [i_15] = (-(max((((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) (unsigned short)7706)) : (((/* implicit */int) (_Bool)1))))), (((arr_42 [i_15] [i_15]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)31857))))))));
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_13 + 1] [i_0]), ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_14] [i_14] [i_13] [i_0] [i_0])) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)24433), (((/* implicit */unsigned short) (signed char)20)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [10LL]))) & (2361321373U)))))) : (min((((((/* implicit */_Bool) (unsigned short)7706)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23337))) : (5518857134433775339ULL))), ((~(var_6)))))));
                        var_43 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 10329575280956667127ULL)) ? (arr_28 [i_0] [i_13 + 1] [i_14] [9ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29)))))))));
                    }
                } 
            } 
            var_44 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 15055372365640932795ULL)) ? ((~(18446744073709551611ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))));
        }
    }
    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_8)))))) || ((!(var_8)))));
}
