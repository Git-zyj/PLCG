/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196613
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
    var_12 = ((/* implicit */unsigned short) ((long long int) ((_Bool) ((unsigned short) 2147483647))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned long long int) (short)-21761)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((long long int) (short)-21761));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */int) (short)-5419);
            var_15 = ((/* implicit */long long int) min((var_15), (-4040929743869605305LL)));
        }
        for (long long int i_2 = 2; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_16 = 7726739158974625303LL;
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_18 = ((_Bool) 1935863458646613706LL);
                    }
                } 
            } 
        }
        for (long long int i_5 = 2; i_5 < 23; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_19 += ((/* implicit */int) (unsigned char)25);
                        var_20 = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                        arr_26 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) (short)-5419);
                    }
                } 
            } 
            arr_27 [i_5] = ((/* implicit */_Bool) ((long long int) (unsigned char)133));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned char i_10 = 3; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) 18446744073709551598ULL);
                            var_22 -= ((/* implicit */unsigned char) 639464676);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned long long int) (_Bool)1)))));
                            var_24 = ((/* implicit */_Bool) ((long long int) (short)21752));
                            arr_37 [i_0] [i_0] [i_8 - 1] [i_9] [i_10] = (unsigned short)43079;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((unsigned short) ((signed char) 1392206287)));
                        var_26 = (_Bool)1;
                    }
                } 
            } 
        }
        arr_43 [(_Bool)0] [i_0] = ((/* implicit */_Bool) -96443754352845269LL);
    }
    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (unsigned char)144))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned char) ((_Bool) (unsigned char)59))))));
        var_29 |= ((/* implicit */unsigned short) ((_Bool) ((unsigned char) 3367368422728501660ULL)));
    }
    for (long long int i_14 = 2; i_14 < 17; i_14 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_15 = 2; i_15 < 16; i_15 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((_Bool) ((_Bool) (unsigned short)28107))))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                for (int i_17 = 2; i_17 < 17; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) ((_Bool) ((short) (_Bool)1)));
                            var_32 ^= ((/* implicit */unsigned char) ((_Bool) -4040929743869605305LL));
                            var_33 = ((/* implicit */short) ((unsigned short) (unsigned char)89));
                        }
                    } 
                } 
            } 
            var_34 = ((unsigned short) -4040929743869605312LL);
            /* LoopSeq 1 */
            for (long long int i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    var_35 ^= ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                    var_36 ^= ((/* implicit */int) (unsigned short)3706);
                    var_37 += ((/* implicit */long long int) ((int) (unsigned short)3693));
                    var_38 ^= ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                }
                arr_65 [i_14] [i_15] [i_15] [i_15] = ((/* implicit */short) 8864727249081558036ULL);
            }
        }
        arr_66 [i_14] = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) (unsigned char)152)));
    }
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 15; i_21 += 3) 
    {
        for (long long int i_22 = 0; i_22 < 15; i_22 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned long long int) (unsigned char)254);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                            {
                                arr_80 [i_22] [i_23 - 1] [i_25] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                                arr_81 [i_21] [i_22] [(unsigned short)11] [(unsigned short)11] [(unsigned short)12] = ((/* implicit */unsigned short) ((signed char) -1801664996));
                                var_40 = ((/* implicit */signed char) ((long long int) 0ULL));
                                var_41 = ((/* implicit */_Bool) (short)-1768);
                            }
                        }
                    } 
                } 
                var_42 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (_Bool)1)));
            }
        } 
    } 
}
