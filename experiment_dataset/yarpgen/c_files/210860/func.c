/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210860
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
        arr_3 [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (unsigned short)9))));
            arr_11 [i_1] [i_2] [i_2] = (+(((unsigned int) (-(((/* implicit */int) (unsigned short)65527))))));
            arr_12 [i_2] = ((/* implicit */unsigned int) ((long long int) ((long long int) -1LL)));
            arr_13 [(_Bool)1] [i_2] [1LL] = ((/* implicit */signed char) ((_Bool) (unsigned short)65535));
            arr_14 [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)65535);
        }
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))));
                arr_19 [i_4] [9] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)0), ((unsigned short)65535))))));
                var_14 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65531))));
                arr_20 [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (-(((int) ((long long int) (unsigned short)0)))));
            }
            for (short i_5 = 2; i_5 < 10; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) 4849368022524208107LL);
                    arr_25 [i_1 - 1] [i_1] [(unsigned char)7] [(short)9] = ((/* implicit */short) (unsigned short)0);
                    arr_26 [i_1 + 1] [i_1] = ((/* implicit */unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((((_Bool) (unsigned short)65528)), ((!((_Bool)0))))))));
                    arr_27 [i_1] [i_3] [i_1] [i_5] [(short)9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-10027)), (547814443930549822ULL)));
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_16 *= ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (((short) 18096627240563052419ULL))));
                    var_17 = ((long long int) ((unsigned long long int) (_Bool)1));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 7; i_8 += 4) /* same iter space */
                    {
                        arr_33 [i_1] [i_3] [i_5] [i_7] [i_8] [i_1] = ((/* implicit */short) (-(35184372088831LL)));
                        var_18 -= ((/* implicit */unsigned int) ((long long int) (unsigned short)65535));
                        arr_34 [i_1] [(short)8] [6U] [6U] [i_8] [i_8] |= ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (signed char)74)))));
                        arr_35 [i_1] [i_3] [i_5 - 1] [i_7] [10] [i_8] [i_8 + 2] = ((/* implicit */unsigned char) ((short) (_Bool)0));
                    }
                    for (long long int i_9 = 1; i_9 < 7; i_9 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)220)))))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), ((~(2034434669U)))));
                    }
                    for (unsigned int i_10 = 2; i_10 < 8; i_10 += 4) 
                    {
                        arr_40 [(unsigned char)5] [i_7] [i_5] [i_5] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3425132666410431748LL)))))));
                        arr_41 [i_7] [i_3] [6U] = 0LL;
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) -2147483626))))))));
                        var_22 = ((/* implicit */long long int) (~((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)7))))))));
                        arr_44 [i_1] [0] [4LL] [i_5] [i_5 - 1] [(unsigned char)3] [i_7] = ((/* implicit */int) max((min((min((118114807U), (((/* implicit */unsigned int) (unsigned char)245)))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)0)), ((short)-10005)))))), (((/* implicit */unsigned int) ((unsigned short) (short)-15804)))));
                        arr_45 [i_7] [i_7] = max((((long long int) (-(((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned short)10)));
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) -266475907604937074LL))));
                    arr_48 [i_12] [i_12] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                    arr_49 [i_12] [i_3] [i_5] [(unsigned char)6] [i_3] [i_1 + 2] = ((/* implicit */long long int) 1873672000);
                }
                for (short i_13 = 4; i_13 < 9; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_54 [i_13] [i_3 - 2] = ((/* implicit */long long int) ((short) (short)-22050));
                        arr_55 [i_1] [i_3 - 1] [i_13] [i_13] [(unsigned char)3] = ((/* implicit */unsigned long long int) (unsigned short)12);
                    }
                    arr_56 [i_13] [i_13] [3LL] [i_5 - 1] [i_13] = ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254))))), ((-(((/* implicit */int) (signed char)56))))));
                    var_24 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (946288722320895680ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)112)), ((short)-10027))))));
                }
                arr_57 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
            }
            var_25 -= ((/* implicit */unsigned int) ((unsigned char) min(((!(((/* implicit */_Bool) (short)31573)))), ((!((_Bool)1))))));
        }
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_26 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 17500455351388655933ULL)))))));
            var_27 += ((/* implicit */long long int) max((((short) 17500455351388655935ULL)), (((/* implicit */short) ((signed char) (_Bool)1)))));
            var_28 += ((/* implicit */unsigned char) max((max((4702805239928261613ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) 2226828977459312599ULL))))));
        }
        var_29 |= min(((+(((unsigned long long int) (signed char)-1)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(1382328696)))), ((-(4294967295U)))))));
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_4))));
}
