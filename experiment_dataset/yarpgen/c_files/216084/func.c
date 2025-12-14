/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216084
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
    var_18 -= ((/* implicit */unsigned short) ((min((((long long int) (unsigned short)6997)), (((/* implicit */long long int) min((-477504174), (((/* implicit */int) (unsigned char)15))))))) + (((/* implicit */long long int) ((var_11) ? (-975461150) : (((/* implicit */int) (unsigned short)16383)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0 + 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) 1825200253)) % (arr_0 [i_1])))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)147)) && (((/* implicit */_Bool) (-(-975461150)))))))));
            arr_6 [i_0] = ((/* implicit */short) (~(((arr_3 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -9223372036854775784LL)), (3222691874570084586ULL)));
                var_20 = ((/* implicit */signed char) var_1);
            }
            arr_10 [i_0] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((signed char) arr_0 [(unsigned short)17]))), (min((arr_9 [i_1] [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_12))))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0] [(short)7] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [(unsigned char)4])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16414)) ? (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_16)))) : (((/* implicit */int) ((_Bool) -9223372036854775784LL)))))) : ((+(521467997U)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) >> (((/* implicit */int) var_11))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) -2081696084))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_22 = ((/* implicit */int) max((var_22), ((+((+(((/* implicit */int) arr_14 [i_4] [(unsigned char)15] [(unsigned char)15] [(unsigned char)15]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) % (((unsigned int) arr_11 [(unsigned char)2] [i_3] [i_0])))))));
                    arr_20 [8U] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)109)) ? (3134905145U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [i_4] [(signed char)14])))));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 7277121754058893871ULL))) ? (((/* implicit */int) arr_14 [i_5] [i_4] [i_3] [i_0])) : (((/* implicit */int) (unsigned char)44))));
                }
                var_25 = ((/* implicit */short) (~(-975461150)));
            }
            /* vectorizable */
            for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) (-(var_6)));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_9))));
                    var_29 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_0] [i_6 - 2] [i_6 - 3] [22]))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned short i_8 = 2; i_8 < 23; i_8 += 2) /* same iter space */
            {
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_19 [i_8] [i_3] [i_0] [i_0 + 3])) ? (((((/* implicit */unsigned long long int) arr_26 [(signed char)13] [(short)23] [i_8] [i_8] [i_8])) + (arr_25 [(short)21] [(short)21] [i_0] [(short)21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8] [i_3] [10U])))));
                var_30 = ((/* implicit */unsigned short) ((int) ((unsigned char) -2147483645)));
            }
            for (unsigned short i_9 = 2; i_9 < 23; i_9 += 2) /* same iter space */
            {
                arr_34 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */int) min((min((10170171847380181266ULL), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (6936401967053992842ULL))))), (var_1)));
                var_31 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -411857226)) && (((/* implicit */_Bool) ((unsigned int) -975461150))))));
                var_32 = ((/* implicit */signed char) min((var_32), ((signed char)-1)));
            }
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) -975461136)))) : (8U)));
                arr_37 [i_0] [15] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0] [(unsigned short)17] [i_10] [i_3]);
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_3] [i_11])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 3; i_12 < 23; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_11] [i_10]))) * (arr_9 [i_0] [i_11] [i_10] [i_11]))) * (((/* implicit */unsigned long long int) ((5708268291305246339LL) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (min((min((18446744073709551589ULL), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) ((int) var_9))))))))));
                        arr_44 [i_0] [(unsigned char)14] [(unsigned char)14] [i_0] [i_0] [(unsigned char)14] [(unsigned char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 411857226)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */_Bool) 30720)) && (((/* implicit */_Bool) (signed char)-1)))))));
                        var_36 = ((/* implicit */unsigned long long int) ((min(((~(((/* implicit */int) var_2)))), (1825200234))) == (((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)54614))) || (((/* implicit */_Bool) -975461136)))))));
                        arr_45 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)96), (((/* implicit */unsigned char) var_10)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (12055887145420387074ULL)))))));
                        var_37 = ((/* implicit */short) ((unsigned int) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)212)) && (((/* implicit */_Bool) (short)-871))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_0]))));
                        arr_48 [i_0] [i_0] [i_3] [i_10 + 1] [i_11] [i_13] [i_13] = ((/* implicit */int) ((short) arr_42 [i_0 + 3] [i_0] [i_11] [i_0 + 3] [i_3]));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        arr_52 [i_0] [i_3] [i_10 - 1] [i_0] = ((/* implicit */long long int) arr_28 [(unsigned char)0] [i_0] [i_0]);
                        arr_53 [i_0 + 2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [(short)11] [i_3] [i_3] [i_3] [i_3] [i_3]))) / (arr_9 [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) -975461150)));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        arr_56 [(short)1] [(short)1] [i_10 - 1] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                        var_39 = ((/* implicit */int) min((arr_51 [i_0 - 1] [i_10] [i_0] [i_10 + 1]), (arr_51 [i_0 + 3] [i_0 + 3] [i_0] [i_10 - 2])));
                        var_40 |= ((/* implicit */unsigned long long int) ((-975461150) <= (((/* implicit */int) (unsigned char)251))));
                        var_41 = ((/* implicit */int) ((signed char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) var_12))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_42 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967279U)) + (arr_29 [i_10 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 3]))))));
                        arr_59 [i_16] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */int) arr_32 [2U] [2U] [i_11] [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned short)34876)))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        arr_64 [i_3] [(signed char)16] [i_3] [(signed char)16] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_1))), (min((var_1), (arr_50 [(_Bool)1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (unsigned short)65535))));
                        arr_65 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 975461150))));
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_68 [i_0] [i_18] [i_0] [i_0] [i_0] [i_11] = ((((min((((/* implicit */int) min((((/* implicit */signed char) var_0)), ((signed char)-21)))), (min((-411857226), (((/* implicit */int) var_10)))))) + (2147483647))) << ((((-(((/* implicit */int) (short)-2985)))) - (2985))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_15) * (((/* implicit */long long int) ((/* implicit */int) ((arr_40 [i_18] [i_3] [i_10] [i_3] [i_3] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))) ? ((((!(((/* implicit */_Bool) arr_50 [i_10])))) ? (((/* implicit */long long int) min((-1085299878), (((/* implicit */int) (signed char)-1))))) : (arr_35 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)63)))) > (min((((/* implicit */unsigned int) var_7)), (21U)))))))));
                        var_44 = ((/* implicit */signed char) var_12);
                        var_45 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_30 [i_10])) < (((/* implicit */int) var_9)))) && (((_Bool) arr_2 [i_11] [i_10 + 1] [(unsigned char)14]))));
                    }
                }
                for (int i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                {
                    arr_73 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_40 [i_19] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (3710485713575370961ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                    arr_74 [i_0] [5U] [i_0] [i_10] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_29 [i_0] [i_3] [(unsigned char)11] [i_19])) || (((/* implicit */_Bool) 10170171847380181266ULL)))) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_11))));
                    var_46 = ((/* implicit */unsigned char) (unsigned short)12494);
                    arr_75 [i_0] [i_0] [i_0] [i_0] [i_19] = ((/* implicit */unsigned short) (+(3710485713575370961ULL)));
                    var_47 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16383))) ^ (4294967288U))));
                }
                for (int i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
                {
                    var_48 -= ((/* implicit */_Bool) min(((signed char)41), (((/* implicit */signed char) ((_Bool) ((26ULL) * (((/* implicit */unsigned long long int) 0U))))))));
                    arr_79 [i_20] [i_0] [i_0] = ((/* implicit */signed char) var_0);
                    var_49 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51205))) - (18446744073709551589ULL)));
                    var_50 = ((/* implicit */int) ((8U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((13705042519543208109ULL), (((/* implicit */unsigned long long int) (unsigned short)16424))))) ? (((/* implicit */int) ((unsigned short) (short)-22837))) : (((/* implicit */int) var_12)))))));
                }
                for (int i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) /* same iter space */
                    {
                        var_51 = ((/* implicit */unsigned short) var_16);
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_0 + 3] [i_0 + 3] [i_21]))) * (13519305165210122726ULL)));
                    }
                    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
                    {
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) 26ULL)) ? (((((/* implicit */_Bool) 975461150)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) : (18446744073709551590ULL))) : (0ULL)));
                        var_54 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_70 [i_0] [i_0 + 1] [i_0 + 2] [i_3] [i_10 + 1] [i_10 + 1])))));
                    }
                    var_55 ^= ((/* implicit */short) min((var_1), (((/* implicit */unsigned long long int) min((var_13), (min((var_3), (var_13))))))));
                    var_56 = ((/* implicit */unsigned short) min((var_56), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) 3075231879U)) : (min((var_1), (((/* implicit */unsigned long long int) var_16)))))))));
                }
            }
        }
        for (int i_24 = 2; i_24 < 21; i_24 += 3) 
        {
            arr_90 [i_0] = ((/* implicit */unsigned short) ((18446744073709551589ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_36 [i_24 + 2] [i_24 + 2] [i_24 - 2])))))));
            arr_91 [i_0] = ((/* implicit */int) ((_Bool) (unsigned char)18));
            arr_92 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
            var_57 = ((/* implicit */unsigned char) (signed char)-1);
            var_58 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((34716646U), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
        }
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            arr_96 [i_0] = ((/* implicit */unsigned short) var_1);
            var_59 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1542))));
        }
        arr_97 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_87 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)6])))))) : (((/* implicit */int) min(((short)(-32767 - 1)), ((short)-28295))))));
        var_60 = ((/* implicit */unsigned short) arr_82 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]);
    }
    for (signed char i_26 = 1; i_26 < 20; i_26 += 3) 
    {
        arr_101 [i_26] = ((/* implicit */signed char) (~(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_1 [i_26 + 1])))))));
        arr_102 [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)38)))) : (arr_33 [i_26] [i_26 + 1] [i_26 - 1])));
        var_61 ^= ((/* implicit */unsigned char) var_0);
        var_62 = ((/* implicit */unsigned short) 13519305165210122744ULL);
    }
}
