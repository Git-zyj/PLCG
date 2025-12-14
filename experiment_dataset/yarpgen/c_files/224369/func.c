/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224369
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
    var_18 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (1627381250735362354ULL)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                arr_7 [i_0] [i_2] [i_2] = ((/* implicit */signed char) 16819362822974189264ULL);
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_1 - 1] [i_1 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((arr_2 [i_2] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (arr_12 [i_0] [i_0])));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2])) - (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_2] [i_0] [i_0] [i_1 - 1]))));
                            arr_14 [i_2] [i_3 + 1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 1]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_3])) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : (arr_4 [i_0 - 2] [i_1 + 1] [i_3])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) 1627381250735362354ULL);
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_2] [(signed char)14] [i_2] = ((/* implicit */int) ((unsigned char) var_12));
                            arr_23 [i_0] [i_2] [i_0] [i_2] [i_6] = ((/* implicit */long long int) ((arr_18 [i_6] [i_5] [i_0 + 3] [i_2 - 1] [i_1 + 2] [i_0 + 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 - 2] [i_1 - 1])))));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_2])) / (((((/* implicit */int) (signed char)-36)) * (((/* implicit */int) arr_8 [i_0] [i_2] [i_0]))))));
                            arr_24 [i_0] [i_1 - 1] [i_2 - 1] [i_5] [i_0] &= ((/* implicit */unsigned int) ((arr_12 [i_1 + 3] [i_2]) | (((/* implicit */long long int) var_2))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) - (1627381250735362374ULL))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (long long int i_7 = 3; i_7 < 15; i_7 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_25 [i_0 + 4] [i_1]))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((_Bool) arr_21 [i_0])))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (signed char)31))));
            }
            arr_29 [i_0 + 4] [i_0 + 4] = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_1 - 1] [i_0 - 3]))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                for (signed char i_9 = 3; i_9 < 14; i_9 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_7);
                        var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0 + 4] [i_1 + 3] [i_8 - 1] [i_8 + 1] [i_9 + 2] [i_9 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 15; i_11 += 2) 
            {
                var_30 = ((/* implicit */_Bool) (signed char)-50);
                /* LoopSeq 1 */
                for (long long int i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    arr_43 [i_0] [i_10] [i_11] [i_12 + 3] |= ((/* implicit */long long int) ((var_0) && (((/* implicit */_Bool) ((arr_42 [i_0] [i_10 + 3] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_30 [i_0] [i_10 + 3]))) : (((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) arr_3 [i_0 + 3] [i_11]))))));
                }
            }
            arr_44 [i_10] = ((/* implicit */short) arr_26 [i_0] [i_0] [i_0] [11LL]);
        }
        for (unsigned char i_13 = 1; i_13 < 13; i_13 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_13] [i_0])) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_13] [i_13] [i_13])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((arr_33 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_13]) ? (arr_39 [i_13 + 3] [i_13 + 3] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_13 + 1] [i_13] [i_13 + 2] [12LL] [i_13])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_33 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)205)) || (((/* implicit */_Bool) -302032416985404651LL)))) ? (((/* implicit */int) arr_37 [i_15 + 1] [i_13 - 1] [i_0 + 1])) : (((/* implicit */int) arr_37 [i_13 + 2] [i_0 + 4] [i_15 - 1]))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_14] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_15] [i_15] [i_13 + 1] [i_15])) ^ (((/* implicit */int) (_Bool)0))))) : (((3588476342136934388LL) & (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0 + 3] [i_14] [i_13] [i_0 + 3]))))))))));
                        arr_54 [i_0] [i_0] = ((/* implicit */unsigned short) arr_34 [i_15 + 1] [i_13]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_16 = 1; i_16 < 14; i_16 += 4) 
            {
                for (unsigned int i_17 = 2; i_17 < 14; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 14; i_18 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_8))));
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
            } 
        }
        arr_64 [i_0] = ((/* implicit */unsigned char) ((var_8) << (((((/* implicit */int) var_12)) - (4)))));
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0 + 4] [i_0 + 4] [i_0 - 3] [i_0 + 4])) ? (arr_12 [i_0 - 4] [i_0]) : (((/* implicit */long long int) arr_58 [i_0] [i_0] [i_0] [(_Bool)1]))));
    }
    for (unsigned char i_19 = 4; i_19 < 12; i_19 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_42 [i_19] [i_19 + 3] [i_19]))));
        arr_67 [i_19] [i_19] = ((((/* implicit */_Bool) (unsigned char)255)) ? (7062823267556807333ULL) : (4517843567884852882ULL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_20 = 1; i_20 < 13; i_20 += 3) 
        {
            var_39 = ((/* implicit */_Bool) 1823950609U);
            arr_70 [i_19] [i_20 + 1] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9019826117544119219ULL)) ? (((/* implicit */long long int) 2754364082U)) : (24LL)));
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_74 [i_21] = var_12;
            var_40 = ((/* implicit */signed char) 12377933156706557287ULL);
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 2; i_22 < 14; i_22 += 4) 
            {
                for (signed char i_23 = 1; i_23 < 15; i_23 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_24 = 1; i_24 < 15; i_24 += 2) 
                        {
                            var_41 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_12))))) : ((+(((/* implicit */int) (signed char)49))))));
                            arr_85 [i_21] [i_23] [(unsigned char)4] [i_21] [i_21] = ((/* implicit */long long int) (unsigned char)1);
                        }
                        for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 3) 
                        {
                            arr_90 [i_19 - 1] [i_19 - 1] [i_21] = ((/* implicit */unsigned char) ((9426917956165432396ULL) - (((/* implicit */unsigned long long int) -302032416985404651LL))));
                            var_42 = ((/* implicit */unsigned char) ((3588476342136934388LL) | (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((short) arr_2 [i_19 - 2] [i_25 - 1])))));
                            arr_91 [i_19] [i_21] [(signed char)0] [i_22] [i_23] [i_21] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)1))));
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((var_5) ? (arr_36 [i_19] [i_21] [i_23 + 1]) : (arr_36 [i_19] [i_19 - 2] [i_19])))));
                        }
                        var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_62 [i_21] [i_19 - 2] [(signed char)9] [i_23] [i_23 + 1] [i_22 + 2] [i_21]))));
                    }
                } 
            } 
            arr_92 [i_21] [i_21] = ((/* implicit */long long int) arr_40 [i_19] [i_19] [i_19] [i_21]);
        }
        arr_93 [i_19] [i_19] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_56 [i_19 - 3] [i_19] [i_19 + 3] [i_19 + 1])) ? (((/* implicit */int) arr_56 [i_19 - 4] [i_19] [i_19 - 4] [i_19])) : (((/* implicit */int) arr_56 [i_19 - 3] [i_19 - 1] [i_19 + 3] [(unsigned char)5])))), (((/* implicit */int) min((arr_9 [i_19 - 3] [i_19 - 3] [i_19] [i_19 - 4] [i_19] [i_19 - 2]), (arr_9 [i_19] [i_19] [i_19] [i_19 - 4] [i_19] [i_19 + 4]))))));
        arr_94 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_32 [(_Bool)1] [i_19 - 4] [i_19] [i_19 - 3]), (((/* implicit */long long int) var_2))))) ? (min((var_3), (arr_32 [i_19] [i_19 + 1] [i_19] [i_19]))) : (min((arr_32 [i_19] [i_19 - 4] [i_19] [i_19]), (arr_32 [i_19] [i_19 - 1] [i_19 + 1] [i_19])))));
    }
    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)49))) : (-302032416985404651LL)))), (max((((/* implicit */unsigned long long int) var_2)), (var_13)))))) ? (min((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) 6ULL)) ? (3588476342136934388LL) : (((/* implicit */long long int) var_2)))))) : (((((/* implicit */_Bool) (~(10066330772909321875ULL)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_0)))))))));
}
