/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34527
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)7))));
            arr_7 [2] [i_0 - 3] [(_Bool)1] = ((/* implicit */signed char) (unsigned char)247);
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-27))))))))));
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            arr_12 [5U] [3U] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((961136038U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))) & (((((/* implicit */long long int) ((/* implicit */int) (short)380))) + (0LL)))))));
            arr_13 [i_0 - 1] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (short)391)) + (((/* implicit */int) (((+(((/* implicit */int) (signed char)7)))) <= (((/* implicit */int) (_Bool)1)))))));
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)119)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */short) 11651233897637712823ULL);
            arr_19 [i_3] = ((/* implicit */unsigned short) (+(14903761937456503787ULL)));
        }
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (7186278220166528341ULL)));
        var_16 = ((/* implicit */unsigned int) (short)-8029);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) 4117775312U))))))));
                        arr_28 [i_0] [(unsigned short)15] [i_0 - 2] [i_0 + 3] [i_0] [i_5] = ((/* implicit */_Bool) (((+(774373262U))) * (568617919U)));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */unsigned int) (unsigned char)243);
        arr_32 [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8)) || (((/* implicit */_Bool) ((16777208U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))))))));
        var_18 = ((/* implicit */int) 5LL);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 7215459005668564824LL))));
        arr_33 [i_7] [1ULL] = ((/* implicit */long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 4278190110U))))) >> (((-4135346839167500672LL) + (4135346839167500699LL)))))));
    }
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (short)10568);
        var_21 = ((/* implicit */int) 1996093973U);
        var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((1386781929U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7970))))))))) ^ (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_23 ^= ((/* implicit */_Bool) (short)-9891);
            arr_40 [i_9] = ((/* implicit */short) (+(((/* implicit */int) (((-(2132101032U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-64))) <= (2132101029U))))))))));
            arr_41 [i_9] = ((/* implicit */unsigned int) (_Bool)0);
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 11651233897637712796ULL))));
        }
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_44 [11U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) == ((~((~(1849097744065934796LL)))))));
            arr_45 [i_10] [i_8] = ((/* implicit */short) 11260465853543023254ULL);
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned int i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        {
                            arr_55 [i_8] [10LL] [i_11] [i_12] [10LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (short)18548)) ^ (((/* implicit */int) (short)29489)))))))));
                            var_25 = ((/* implicit */short) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)18521))) ^ (2100928761U)))))));
                        }
                    } 
                } 
                var_26 += ((/* implicit */unsigned long long int) 3196720840U);
            }
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
            {
                arr_59 [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)16961))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 3) 
                {
                    var_27 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) - (4257820867178753857LL))) + (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) -2451215949494237149LL)))) && (((/* implicit */_Bool) 1495168340U))))))));
                    var_28 = (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) - (7186278220166528341ULL))))));
                }
            }
            for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) min((var_29), ((signed char)-94)));
                var_30 *= ((/* implicit */_Bool) -3802569039841461895LL);
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) (-((+(((1988616289) >> (((3773895164U) - (3773895140U)))))))));
                    arr_68 [i_8] [i_8] = ((/* implicit */unsigned char) 1495168352U);
                }
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    var_32 = ((/* implicit */int) (+(2799798956U)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_19 = 4; i_19 < 9; i_19 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((2162866258U) - (2162866256U)))));
                        var_34 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)24))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
                        arr_73 [(unsigned char)2] [11LL] [i_16] [(_Bool)1] [i_19] = ((/* implicit */unsigned long long int) ((((1609667026U) >> (((3972588375U) - (3972588356U))))) >= (((/* implicit */unsigned int) (-(678425688))))));
                    }
                    for (long long int i_20 = 3; i_20 < 10; i_20 += 1) 
                    {
                        var_35 = (unsigned char)110;
                        var_36 -= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)18548))))));
                    }
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (~((+((-(3911155562U))))))))));
                }
                arr_76 [(short)10] = ((/* implicit */unsigned short) (short)-32758);
            }
            arr_77 [i_10] = ((/* implicit */unsigned char) (((((~((-(-8136692387614547123LL))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) 65536ULL)) && ((_Bool)1)))))) + (32)))));
        }
        var_38 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)32)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33))))))))));
    }
    for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        var_39 += ((/* implicit */unsigned long long int) ((2799798927U) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15))))) >= (((/* implicit */int) (unsigned char)224))))))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
        {
            for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
            {
                {
                    var_40 = ((/* implicit */long long int) (((((~(((/* implicit */int) (_Bool)1)))) | ((~(((/* implicit */int) (signed char)-4)))))) | ((~((~(((/* implicit */int) (unsigned char)100))))))));
                    arr_87 [i_22] [i_22] [i_22] [i_21] = ((/* implicit */unsigned int) (~((-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-4833658822291644689LL)))))));
                    arr_88 [i_22] = ((/* implicit */unsigned int) -2999353698134942213LL);
                    var_41 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) > (2727509168U))))))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-15314)))))))));
}
