/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199261
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
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_6) ? (var_13) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((long long int) 10447809806358597004ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4436126871395353701ULL)))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (1439284633846805179LL) : (1439284633846805180LL)))))) : ((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4)))))))));
    var_19 = ((/* implicit */unsigned short) ((((((unsigned long long int) (unsigned short)21887)) / ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) -3918421259746885866LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) var_15))) + (((var_8) / (((/* implicit */long long int) var_16)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_14) : (((/* implicit */unsigned long long int) var_1))))));
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14999928816740674267ULL)) ? (9223371487098961920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43674)))))) ? (((long long int) 10447809806358596993ULL)) : (((((/* implicit */_Bool) 2195007360U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
        var_24 ^= ((/* implicit */int) ((((/* implicit */long long int) 1556695123U)) | (7561265019616159422LL)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)1972)) && (((/* implicit */_Bool) min((-7561265019616159426LL), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((min((2760151073U), (((/* implicit */unsigned int) (signed char)123)))) + ((-(8388607U))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    var_26 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3]) <= (arr_9 [i_3 - 1] [i_3] [i_3] [i_3])))), (((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_2 [i_2] [i_3 + 1])))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_14)))))));
                    arr_10 [i_1] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */int) (unsigned char)118)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
            {
                arr_20 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_12))));
                arr_21 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21898)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))));
            }
            for (long long int i_7 = 1; i_7 < 18; i_7 += 4) /* same iter space */
            {
                var_27 |= ((/* implicit */int) (((~(8032500220660867233LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_28 = ((((/* implicit */_Bool) (~(3122441181156100726ULL)))) ? (arr_6 [i_4 + 1] [i_4 + 1] [i_7 - 1]) : (((/* implicit */int) arr_18 [i_7] [i_7 + 2] [i_5])));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) 18446744073709551615ULL)));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_4] [i_4 + 1] [i_4 + 1] [i_9])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (10447809806358597008ULL) : (((/* implicit */unsigned long long int) -7561265019616159426LL)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_13)))));
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (arr_26 [i_4] [i_5] [i_8]))) + (((/* implicit */int) arr_23 [i_8] [i_10]))));
                    arr_33 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_15 [i_5] [i_10]))))) % (((/* implicit */int) (signed char)71))));
                }
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((arr_6 [8LL] [i_5] [i_8]) <= (((/* implicit */int) var_12)))))));
                var_33 ^= ((/* implicit */long long int) ((int) var_9));
            }
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
        {
            var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((var_16) != (-652030866)))) : (((/* implicit */int) var_9))));
            /* LoopSeq 2 */
            for (unsigned short i_12 = 3; i_12 < 19; i_12 += 4) /* same iter space */
            {
                var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 595100793270037166LL)) ? (-7561265019616159422LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_3 [i_4 + 1]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
                    arr_40 [i_4] [i_4] [i_13] [i_12] [i_12 - 1] [i_12] = ((/* implicit */signed char) (+(-2085887048347103597LL)));
                    var_37 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_4 + 1] [(unsigned short)12] [i_13])) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_4] [i_11] [i_12 - 3] [i_13])) ? (-1255767366) : (((/* implicit */int) (unsigned char)152)))))));
                }
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4010191759U)) ? (3456229954U) : (((/* implicit */unsigned int) (~(567086801))))));
                    var_39 = ((((/* implicit */_Bool) (signed char)-20)) ? (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */long long int) var_16)) : (arr_3 [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_5))))));
                    /* LoopSeq 1 */
                    for (int i_15 = 2; i_15 < 16; i_15 += 4) 
                    {
                        var_40 = ((/* implicit */signed char) ((1743917766U) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_41 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)140))));
                    }
                    arr_45 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)-6779)) : (((/* implicit */int) (unsigned short)34703))));
                }
            }
            for (unsigned short i_16 = 3; i_16 < 19; i_16 += 4) /* same iter space */
            {
                var_42 = (((+(2983866124444506961LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_4 + 1] [i_4 + 1] [i_16 - 3] [i_16 - 1]))));
                var_43 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)121)) ? (4286578689U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))));
                arr_49 [i_4 + 1] [i_16 - 2] [i_16] = ((((/* implicit */int) arr_28 [i_4 + 1] [14U] [14U] [i_16 - 2] [i_16 - 2] [i_16 - 3])) & (((/* implicit */int) arr_4 [i_4] [i_16 - 2])));
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 2; i_18 < 19; i_18 += 3) 
                    {
                        var_44 &= ((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_15))));
                        arr_55 [i_4] [i_4] [i_16] [i_4] [i_17] [i_4] [i_18] = ((/* implicit */long long int) ((arr_36 [i_4] [i_16 - 3] [i_4 + 1] [i_4]) % (((/* implicit */unsigned long long int) 595100793270037180LL))));
                        arr_56 [i_11] |= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)7290)) & (((/* implicit */int) (unsigned short)65535))))));
                        var_45 *= ((/* implicit */signed char) var_8);
                    }
                    var_46 = ((/* implicit */unsigned long long int) (!(var_2)));
                    var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-1) : (((/* implicit */int) (unsigned char)17))))))));
                    arr_57 [i_4] [(unsigned char)0] [i_16] [i_17] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)162));
                }
                arr_58 [i_4] [i_11] = ((/* implicit */_Bool) (~(((unsigned long long int) 1403755452U))));
            }
            var_48 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_4] [i_11] [i_11] [i_11])) >> (((((/* implicit */int) var_12)) - (15))))))));
            var_49 &= ((/* implicit */unsigned long long int) arr_2 [i_4 + 1] [i_4 + 1]);
            /* LoopNest 2 */
            for (unsigned char i_19 = 2; i_19 < 18; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        arr_64 [i_11] [i_19] [i_11] [i_20] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2785289007U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_20] [i_19 + 2]))) : (34359738367LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64431)))));
                        var_50 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -3)) & (10447809806358597004ULL)));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) 
        {
            var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_4] [i_4 + 1])) ? (((/* implicit */int) var_4)) : (arr_6 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
            var_52 |= ((/* implicit */unsigned int) arr_29 [i_4] [i_4] [i_4] [i_4]);
        }
        for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
        {
            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1])) ? (arr_12 [i_4 + 1] [i_4 + 1]) : (((/* implicit */int) (unsigned char)0))));
            var_54 = ((/* implicit */short) (+(1920923946408172485ULL)));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
    {
        var_55 += ((((/* implicit */_Bool) arr_69 [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_70 [i_23] [i_23]))));
        arr_73 [i_23] = ((((/* implicit */_Bool) arr_72 [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_23]))) : (var_7));
    }
}
