/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234230
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((var_8) - (((/* implicit */int) arr_1 [i_0] [i_0])))) + (((/* implicit */int) arr_3 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_15) : (((/* implicit */long long int) -387164664)))))))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) arr_6 [i_0 - 1]))));
        }
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_19 = ((((/* implicit */int) (unsigned char)140)) | (((/* implicit */int) (unsigned short)65521)));
            var_20 = ((/* implicit */unsigned long long int) var_2);
        }
    }
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                var_21 = ((short) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_3 - 1])) ? (-4506813290104231627LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))));
                arr_19 [i_3] [i_3] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_4] [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (1965872001740393289LL))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_4 - 1])) ? (((((/* implicit */_Bool) var_13)) ? (10092593441223971438ULL) : (((/* implicit */unsigned long long int) arr_5 [i_5] [0LL] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4 + 2]))) * (var_10)));
            }
            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            arr_28 [i_3] [i_3] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) arr_1 [i_7] [i_4]);
                            var_24 = ((/* implicit */signed char) (short)3194);
                            var_25 = ((/* implicit */unsigned long long int) ((((long long int) var_4)) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_26 = ((/* implicit */long long int) min((var_26), ((-(((((/* implicit */long long int) var_8)) - (var_13)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) 10092593441223971441ULL);
            }
            arr_29 [i_3] = ((/* implicit */int) (unsigned short)17553);
        }
        for (unsigned int i_9 = 4; i_9 < 17; i_9 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_3 - 1] [i_9 - 4]))));
            var_29 = ((/* implicit */short) arr_23 [i_3 + 1] [i_9 - 1]);
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        arr_36 [i_3] = ((/* implicit */unsigned short) var_15);
                        var_30 = ((/* implicit */unsigned char) arr_21 [i_3] [18LL]);
                    }
                } 
            } 
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [16LL])) ? (arr_15 [i_3 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 - 1] [i_9] [i_9])))))) ? (((((/* implicit */_Bool) arr_27 [i_3] [i_3 + 2] [i_3 + 2] [i_9 + 2] [i_9 + 3] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16U] [16U]))) : (arr_33 [i_3] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_3] [i_3 + 1] [i_3])))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    {
                        arr_46 [i_14] [i_14] [i_14] [(unsigned short)14] = ((/* implicit */unsigned char) 8354150632485580178ULL);
                        var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (14787515468195054928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        var_33 = ((/* implicit */unsigned long long int) arr_37 [i_13] [i_14]);
                        var_34 = (_Bool)1;
                        var_35 -= ((/* implicit */signed char) ((unsigned short) var_9));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned char) (~(var_12)));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 3; i_15 < 17; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned int i_17 = 3; i_17 < 19; i_17 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_4)))));
                            var_38 ^= ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */int) arr_45 [i_16 - 1] [i_3 + 1])) : (387164662)));
                            arr_54 [7LL] [i_12] [i_15] [i_15] [7LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_43 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [1ULL] [1ULL] [i_3 - 1]))) : (var_16))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_15])))));
                        }
                    } 
                } 
                arr_55 [i_15] [i_15] = ((/* implicit */_Bool) var_10);
            }
            var_39 = ((/* implicit */_Bool) arr_44 [i_3] [i_3 - 1] [i_3] [i_12]);
        }
        arr_56 [i_3 + 1] = arr_37 [i_3] [i_3 + 1];
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) arr_26 [i_3 + 1] [i_3 - 1] [i_3 + 2])) : ((~(3659228605514496687ULL)))))) ? (((((/* implicit */_Bool) 12569592088748979415ULL)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_21 [i_3] [i_3])))))));
        var_41 = ((/* implicit */unsigned char) arr_9 [i_3] [i_3]);
        var_42 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) 12569592088748979415ULL))) : (((/* implicit */int) arr_50 [i_3] [i_3] [i_3] [i_3 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3 + 2])) || ((!(((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_3]))))))));
    }
}
