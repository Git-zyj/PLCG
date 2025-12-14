/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219060
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
    var_11 &= ((/* implicit */unsigned short) var_6);
    var_12 = ((/* implicit */_Bool) min((((((((/* implicit */int) var_9)) <= (var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)110), (((/* implicit */unsigned char) var_10)))))) : (min((3537845658434059364ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) var_3))));
    var_13 &= ((/* implicit */short) var_9);
    var_14 = ((/* implicit */_Bool) ((signed char) (!((!(((/* implicit */_Bool) 2ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_15 |= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)40809)) == (((/* implicit */int) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1]))));
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_1])))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)24727))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2]))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) arr_4 [i_0] [(signed char)15]))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_8 [i_0 - 2])) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)22359)) : (((/* implicit */int) (signed char)67)))))))));
            arr_9 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 3] [i_0 - 3]))));
        }
        for (short i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50248)) ? (arr_14 [i_0] [i_0 - 1] [i_0 - 2]) : (arr_0 [i_3 - 1])));
                        var_21 &= 262455571;
                        arr_18 [i_5] [i_5] [13] [i_3] [i_0] = ((/* implicit */_Bool) (-(-651470443)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned long long int) (((+(arr_7 [i_6] [i_6]))) / (((/* implicit */int) ((signed char) arr_14 [i_3] [(unsigned char)17] [i_6])))));
                        arr_24 [i_3] [i_6] &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_0])) && (((/* implicit */_Bool) var_8)))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 4; i_8 < 19; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_8] [i_3] [i_0] [i_8 - 4] [i_8] &= ((/* implicit */int) arr_20 [i_0] [i_7] [i_3 + 2] [i_7]);
                            var_23 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2])))));
                            arr_28 [i_0 - 2] [i_0 - 1] = ((/* implicit */_Bool) arr_3 [i_0]);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 3])) ? (arr_15 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8 - 1] [(_Bool)1] [i_8] [i_8 - 3] [i_8] [i_8])))));
                            arr_29 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_7] [i_8 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_9)) : (var_6)))) ? (arr_14 [(unsigned short)9] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [8])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-88)) < (var_8))) ? ((~(-1124933894))) : (arr_30 [i_0 - 3] [i_9])));
                            var_26 = ((/* implicit */int) max((var_26), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_3 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]))));
                            var_27 &= ((/* implicit */unsigned char) arr_13 [19ULL] [i_3]);
                            arr_36 [i_10] [i_10] [i_7] [i_6] [i_10] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 2] [i_3 - 2]))));
                            arr_37 [i_0] [(_Bool)1] [i_10] [i_7] [(unsigned short)16] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_3))) * (arr_0 [i_3])));
                        }
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_3] [i_3 + 2] [i_3 + 1] [i_3]))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14908898415275492228ULL))))))));
                    }
                } 
            } 
            arr_38 [i_0 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_16 [(_Bool)1] [i_0 + 1] [i_3 + 1] [i_3 + 1])))))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3537845658434059413ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_15 [i_3 - 2])))))))));
            var_31 = ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_22 [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3 + 1] [i_3])));
        }
        arr_39 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) var_10))));
    }
}
