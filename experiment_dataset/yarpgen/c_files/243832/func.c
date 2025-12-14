/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243832
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
    var_15 ^= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = (short)7343;
        arr_2 [i_0] = ((/* implicit */_Bool) 288195191779622912ULL);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_17 ^= ((/* implicit */_Bool) 1872128750);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_5 - 1] [i_4] [i_2] [i_1] [i_1] &= ((/* implicit */long long int) (short)0);
                            var_18 -= (signed char)15;
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 613616085944310932ULL))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) -1918989926))));
                            arr_18 [i_2] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) 288195191779622912ULL);
                            var_21 |= ((/* implicit */_Bool) 613616085944310932ULL);
                        }
                        var_22 = ((/* implicit */_Bool) -1918989935);
                        arr_19 [(unsigned char)0] [i_2] [i_3] [(unsigned char)0] = -1918989930;
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_22 [i_1] [14ULL] [i_3] [i_4] [i_7] [15U] = ((/* implicit */unsigned short) (unsigned char)232);
                            var_23 &= (-9223372036854775807LL - 1LL);
                            var_24 -= ((/* implicit */unsigned short) (short)448);
                            var_25 += ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_23 [i_7] [i_3] [i_3] [i_1] [i_1] = 2648980111839497888ULL;
                        }
                        var_26 = (unsigned short)2035;
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) 5374040364809705677ULL))));
                        arr_27 [(_Bool)1] [i_8] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */int) (signed char)-15);
                        arr_28 [i_2] [i_2] [11LL] [11LL] = ((/* implicit */unsigned short) 16108040712584750655ULL);
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        var_28 &= ((/* implicit */long long int) -1918989937);
                        var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_30 -= ((/* implicit */_Bool) -1428578632574361374LL);
                    }
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (int i_11 = 4; i_11 < 13; i_11 += 2) 
                        {
                            {
                                arr_40 [i_1] [i_1] [i_1] [6LL] [i_1] [i_1] = ((/* implicit */int) (signed char)-29);
                                arr_41 [i_1] [i_2] [i_3] [i_3] [i_10] [(unsigned short)2] = ((/* implicit */short) (signed char)-12);
                                var_31 = ((/* implicit */unsigned char) 6697391493733596575LL);
                                var_32 = ((/* implicit */int) -4382929410700766566LL);
                                var_33 = ((/* implicit */unsigned short) 1603664519U);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_45 [i_12] [(unsigned char)4] [i_12] [i_12] [i_2] [(unsigned char)4] = (_Bool)0;
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */short) 496170498340573120LL);
                            var_35 = ((/* implicit */long long int) 2266899555U);
                            var_36 -= ((/* implicit */short) (unsigned short)36132);
                        }
                        arr_48 [8ULL] [i_12] [i_2] [8ULL] [i_3] [i_12] = ((/* implicit */long long int) (short)32762);
                    }
                    var_37 = ((/* implicit */signed char) 0);
                }
            } 
        } 
        var_38 = ((/* implicit */int) (unsigned short)65531);
        var_39 |= ((/* implicit */long long int) 4294183487U);
    }
}
