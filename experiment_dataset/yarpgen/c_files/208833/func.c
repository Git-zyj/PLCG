/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208833
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
    var_11 = var_10;
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) -108765464801298130LL);
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_11 [i_0] [i_1] [i_0] [(short)12] [i_3] [i_4] [(short)5] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (signed char)127))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_15 *= ((/* implicit */long long int) (_Bool)1);
                arr_17 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 2 */
                for (long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    var_16 &= (short)5186;
                    arr_20 [i_0] = ((/* implicit */unsigned char) 10513609552077837834ULL);
                    arr_21 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */signed char) -4465243841742205790LL);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) 2234687598U);
                        var_17 = ((/* implicit */long long int) max((var_17), (7174110844497439051LL)));
                    }
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (1818811460558510544LL)));
                        var_19 &= ((/* implicit */signed char) -4301818373769836572LL);
                        arr_27 [i_0] [i_0] [i_1] [i_5] [i_6] [i_1] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)2501);
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    arr_31 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_32 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */long long int) (unsigned short)2501);
                    var_20 = ((/* implicit */signed char) (unsigned short)63035);
                    arr_33 [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
            }
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_40 [i_0] [15LL] [i_1] [i_0] = ((/* implicit */_Bool) (signed char)-114);
                    arr_41 [i_0] [i_0] [i_0] [9LL] [i_11] [i_11] = ((/* implicit */unsigned short) 7174110844497439051LL);
                    var_21 = 1949576495227709482LL;
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_22 = ((/* implicit */long long int) (_Bool)1);
                    var_23 = ((/* implicit */short) -9215996551891364488LL);
                    arr_45 [i_0] [i_1] [i_1] [i_1] [i_12] [i_1] &= ((/* implicit */unsigned short) (unsigned char)199);
                }
                for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) (unsigned char)170);
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) 4119069512592395061LL);
                        var_26 = ((/* implicit */unsigned short) 4577113276569887095LL);
                        var_27 = ((/* implicit */signed char) (unsigned short)17778);
                        arr_53 [i_0] [i_0] [i_10] [i_13] [i_14] = ((/* implicit */int) -7174110844497439048LL);
                        var_28 *= ((/* implicit */unsigned long long int) (short)3444);
                    }
                    var_29 -= ((/* implicit */long long int) (short)5018);
                    var_30 = ((/* implicit */_Bool) (signed char)17);
                }
                var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 2) 
            {
                var_32 *= ((/* implicit */signed char) (_Bool)1);
                var_33 = ((/* implicit */unsigned short) (signed char)33);
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (unsigned char)154))));
            }
            /* LoopSeq 3 */
            for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_35 = ((/* implicit */signed char) (unsigned char)0);
                    arr_61 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */long long int) (unsigned char)18);
                    var_36 += ((/* implicit */unsigned char) 3740604660U);
                }
                var_37 = ((/* implicit */unsigned long long int) -1949576495227709494LL);
                /* LoopSeq 3 */
                for (unsigned int i_18 = 1; i_18 < 13; i_18 += 1) 
                {
                    arr_65 [i_0] [i_0] [i_16] [i_18] = ((/* implicit */signed char) 14115126367011014131ULL);
                    arr_66 [i_0] = ((/* implicit */signed char) 4023190569U);
                }
                for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    var_38 = ((/* implicit */signed char) (unsigned char)52);
                    /* LoopSeq 1 */
                    for (signed char i_20 = 1; i_20 < 14; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) 4023190561U))));
                        var_40 -= ((/* implicit */unsigned char) -1949576495227709494LL);
                    }
                    arr_73 [(unsigned char)10] [i_16] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (long long int i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        var_41 *= ((/* implicit */unsigned char) (signed char)71);
                        var_42 = -7877790531272342611LL;
                        arr_80 [i_0] [2LL] [i_0] [11U] [i_0] [i_0] = (short)-28817;
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) -7211557871153269240LL);
                        arr_84 [i_0] [i_21] [(signed char)8] [i_0] = ((/* implicit */unsigned short) 2172458903U);
                        var_44 = ((/* implicit */signed char) 8372725129779513ULL);
                        var_45 = ((/* implicit */unsigned char) (signed char)-3);
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) -6573730158871491485LL))));
                    }
                    var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (_Bool)1))));
                    var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) -542158667))));
                    var_49 = ((/* implicit */long long int) min((var_49), (6690685257285471974LL)));
                }
            }
            for (unsigned char i_24 = 1; i_24 < 15; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 16; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 4; i_26 < 14; i_26 += 2) 
                    {
                        {
                            arr_92 [i_26] [i_0] [i_24] [i_24] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                            arr_93 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)0);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 16; i_27 += 2) 
                {
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) 5807870645112224839ULL))));
                    var_51 = -3660997278758413555LL;
                }
                var_52 ^= ((/* implicit */short) (signed char)-91);
                var_53 = ((/* implicit */unsigned long long int) 2764696488055806524LL);
            }
            for (unsigned short i_28 = 0; i_28 < 16; i_28 += 1) 
            {
                arr_99 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                arr_100 [(signed char)5] [10LL] [i_0] = ((/* implicit */signed char) (unsigned short)63350);
                /* LoopSeq 3 */
                for (long long int i_29 = 0; i_29 < 16; i_29 += 1) 
                {
                    var_54 = ((/* implicit */signed char) 876278538U);
                    /* LoopSeq 3 */
                    for (unsigned char i_30 = 0; i_30 < 16; i_30 += 1) 
                    {
                        arr_105 [i_0] [i_1] [i_28] [3LL] [i_0] [i_30] = 10878464870146499945ULL;
                        var_55 = -1144324457358775751LL;
                    }
                    for (signed char i_31 = 0; i_31 < 16; i_31 += 3) 
                    {
                        var_56 |= ((/* implicit */unsigned short) 554362636U);
                        var_57 ^= ((/* implicit */long long int) 3740604659U);
                    }
                    for (short i_32 = 0; i_32 < 16; i_32 += 4) 
                    {
                        var_58 ^= ((/* implicit */unsigned char) (_Bool)1);
                        arr_111 [i_0] [i_32] [(unsigned char)2] [i_29] &= -7550537352063536933LL;
                    }
                    arr_112 [i_0] [i_29] = ((/* implicit */short) 2607703587078409770ULL);
                }
                for (unsigned char i_33 = 0; i_33 < 16; i_33 += 1) 
                {
                    arr_117 [i_0] [i_0] [2ULL] [i_33] = ((/* implicit */signed char) 2764696488055806514LL);
                    var_59 -= ((/* implicit */unsigned int) (_Bool)1);
                    var_60 ^= ((/* implicit */unsigned short) (_Bool)1);
                }
                for (short i_34 = 1; i_34 < 14; i_34 += 2) 
                {
                    var_61 = ((/* implicit */signed char) (unsigned char)4);
                    arr_120 [i_0] [i_34] [(signed char)7] [i_34] = ((/* implicit */long long int) (unsigned char)39);
                    var_62 = ((/* implicit */_Bool) min((var_62), (((/* implicit */_Bool) 3740604660U))));
                    var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) 2879284365U))));
                }
            }
        }
        arr_121 [i_0] = (unsigned short)12426;
        var_64 -= ((/* implicit */signed char) (unsigned short)20861);
        var_65 ^= ((/* implicit */int) (signed char)106);
    }
    /* vectorizable */
    for (long long int i_35 = 3; i_35 < 7; i_35 += 1) 
    {
        var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) 4369729660688680867LL))));
        var_67 = ((/* implicit */signed char) (_Bool)1);
    }
}
