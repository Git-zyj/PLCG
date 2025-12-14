/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39947
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 + 1] = min((((/* implicit */long long int) max((max((var_4), (arr_2 [i_0]))), (min(((short)32767), (((/* implicit */short) (unsigned char)186))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1491842449U)))), (max((var_16), (arr_1 [i_0 + 1]))))));
        var_17 = ((/* implicit */short) max((2803124845U), (((/* implicit */unsigned int) (short)16391))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_2] [(short)5] [i_4] = ((/* implicit */unsigned short) 8322104548427282146LL);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (unsigned short)19693))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 2803124847U))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) -3935658653991614008LL))));
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (_Bool)1))));
            arr_17 [13LL] [i_5] = ((/* implicit */short) (_Bool)1);
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned char)169))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (_Bool)1))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 1491842450U))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 3051623656U))));
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */int) -1LL);
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (unsigned char)63))));
                        var_27 ^= ((/* implicit */_Bool) (unsigned short)44849);
                        var_28 = ((/* implicit */long long int) (unsigned char)57);
                    }
                } 
            } 
            arr_33 [i_1] [i_8] = ((/* implicit */unsigned short) (short)-9792);
        }
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
        {
            var_29 -= ((/* implicit */short) -129053061);
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 14; i_14 += 2) 
                {
                    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (short)-9800))));
                            var_31 -= ((/* implicit */unsigned char) (unsigned short)54408);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) 4294967295U))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) -129053056))));
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (short)31775))));
                arr_48 [i_11] [i_11] &= ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                /* LoopSeq 4 */
                for (short i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    arr_53 [(unsigned short)7] [(unsigned short)7] |= ((/* implicit */unsigned char) (short)-14614);
                    var_35 = ((/* implicit */long long int) (unsigned short)17216);
                }
                for (unsigned char i_18 = 1; i_18 < 16; i_18 += 2) /* same iter space */
                {
                    var_36 -= ((/* implicit */unsigned long long int) 583499544144174121LL);
                    var_37 = ((/* implicit */unsigned char) max((var_37), ((unsigned char)60)));
                    var_38 |= ((/* implicit */_Bool) (unsigned short)65535);
                    arr_56 [i_18] [i_16] [i_18] [i_18] [i_11 - 1] [i_11 - 1] = ((/* implicit */unsigned int) (unsigned short)40909);
                }
                for (unsigned char i_19 = 1; i_19 < 16; i_19 += 2) /* same iter space */
                {
                    var_39 -= ((/* implicit */_Bool) 6018119900860904312LL);
                    var_40 = ((/* implicit */unsigned short) (unsigned char)196);
                    arr_59 [i_11 - 1] [i_12] [i_16] [2U] [i_16] |= ((/* implicit */unsigned short) 583499544144174147LL);
                    arr_60 [(_Bool)1] [(_Bool)1] [i_12] [i_16] [i_12] &= ((/* implicit */unsigned short) (unsigned char)187);
                }
                for (unsigned char i_20 = 1; i_20 < 16; i_20 += 2) /* same iter space */
                {
                    var_41 += ((/* implicit */unsigned short) (unsigned char)187);
                    arr_63 [i_11] [i_11] [i_20] [i_20] = ((/* implicit */_Bool) (unsigned short)63855);
                }
                arr_64 [i_11] [i_11] [i_11 - 1] = ((/* implicit */int) 3642607977U);
                var_42 *= ((/* implicit */unsigned char) -4819628518188001219LL);
            }
        }
        for (long long int i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
        {
            arr_67 [i_21] [i_21] = ((/* implicit */unsigned char) min((6018119900860904312LL), (((/* implicit */long long int) (short)4175))));
            var_43 -= ((/* implicit */_Bool) max((max((((/* implicit */long long int) max((1150921580U), (((/* implicit */unsigned int) arr_58 [i_11 - 1] [i_21] [i_21] [i_11 - 1] [i_21] [i_21]))))), (min((arr_62 [i_11] [i_11] [i_11] [i_11 - 1] [i_11]), (((/* implicit */long long int) arr_50 [i_11] [i_11] [i_11])))))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)220)), ((short)32767))))));
            var_44 |= ((/* implicit */unsigned char) max((max((max((((/* implicit */long long int) (unsigned char)68)), (-5563103352695457581LL))), (max((((/* implicit */long long int) var_4)), (2450972789994053809LL))))), (min((max((144115188075855872LL), (((/* implicit */long long int) arr_55 [(unsigned short)4] [i_21] [i_11] [12] [i_21] [(unsigned char)8])))), (min((var_15), (((/* implicit */long long int) arr_38 [i_11] [i_11]))))))));
        }
        arr_68 [i_11] [i_11 - 1] = min((max((min((-8987352915825032466LL), (9223372036854775801LL))), (((/* implicit */long long int) (unsigned char)7)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))));
        arr_69 [i_11 - 1] = ((/* implicit */unsigned char) max((min((max((-6018119900860904306LL), (((/* implicit */long long int) (short)-4169)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)65534)), (1111263626U)))))), (min((((/* implicit */long long int) min((var_14), (arr_23 [(_Bool)1] [(_Bool)1] [i_11])))), (min((var_16), (var_0)))))));
    }
    for (unsigned int i_22 = 2; i_22 < 19; i_22 += 3) 
    {
        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) min((max((min((arr_16 [2U] [2U] [2U]), (-2545054321205449594LL))), (((/* implicit */long long int) min((var_11), (var_9)))))), (min((min((9223372036854775801LL), (((/* implicit */long long int) (short)4169)))), (min((var_10), (((/* implicit */long long int) var_5)))))))))));
        var_46 = ((/* implicit */unsigned char) max((583499544144174133LL), (max((max((-9223372036854775802LL), (((/* implicit */long long int) (unsigned char)0)))), (min((-9223372036854775802LL), (((/* implicit */long long int) (unsigned char)232))))))));
    }
    var_47 |= ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((((/* implicit */short) var_1)), (var_4))), (((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)58))))))), (max((min((var_12), (((/* implicit */long long int) var_11)))), (max((var_10), (((/* implicit */long long int) var_4))))))));
    var_48 = ((/* implicit */int) max((min((((/* implicit */long long int) (short)-4169)), (min((((/* implicit */long long int) (unsigned short)16490)), (-8254083144825380019LL))))), (max((min((((/* implicit */long long int) var_14)), (var_8))), (((/* implicit */long long int) max(((short)-1), ((short)-4176))))))));
}
