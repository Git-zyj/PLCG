/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210463
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_4 [i_1] [i_0]))), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [(unsigned char)0])) + (((/* implicit */int) arr_5 [2LL] [i_1])))) != (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)5])))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_1), ((short)32756)))) + (((/* implicit */int) arr_5 [i_3 + 3] [i_3 + 3]))))) ? (max(((+(((/* implicit */int) (short)-2614)))), (((/* implicit */int) arr_10 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) : (((((((/* implicit */int) (short)-32757)) != (((/* implicit */int) (unsigned char)93)))) ? (((/* implicit */int) max((arr_1 [i_4] [i_0]), (var_6)))) : ((-(((/* implicit */int) (short)-32763))))))));
                                var_13 = ((/* implicit */short) arr_4 [i_1 - 3] [i_3 + 2]);
                                var_14 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                            }
                            var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_8)), (var_0))), (((/* implicit */long long int) var_8))));
                            var_16 = ((((/* implicit */_Bool) 5715638309192034823LL)) || (((/* implicit */_Bool) (unsigned char)241)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned short) ((long long int) var_2)));
        var_18 -= ((/* implicit */long long int) ((unsigned short) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            for (short i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) arr_17 [i_6 - 3] [i_6 - 2])))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32756)) ? (8172080662340624015LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 - 3] [i_6 + 1])))));
                    var_21 = (unsigned short)65535;
                }
            } 
        } 
    }
    for (unsigned short i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 12; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) (unsigned short)16383);
                                var_23 = ((/* implicit */_Bool) (+(-5715638309192034823LL)));
                                var_24 &= ((/* implicit */unsigned char) (((-(((/* implicit */int) ((unsigned short) (unsigned char)38))))) == (min((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) arr_16 [i_8] [i_9 + 2] [0LL]))))), ((~(arr_23 [i_8])))))));
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1] [i_12])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)885)))))))) ? (var_8) : (((/* implicit */int) max((arr_32 [i_8 - 1] [i_8 - 1] [i_8 - 1]), (((/* implicit */unsigned short) arr_18 [i_10] [i_10]))))));
                                var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)906)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)0))))) ? (-1711604129) : (((/* implicit */int) ((((/* implicit */int) arr_30 [i_8 - 1] [i_8 - 1] [i_8] [i_9 - 4] [i_9 - 3] [i_11 + 1])) == (((/* implicit */int) arr_15 [i_8])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((_Bool) max((arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_29 [i_8 + 1] [i_8 - 1] [i_8 - 1]))));
                    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_13 [i_8] [i_9]))))))));
                    var_29 = ((int) ((((arr_14 [i_10]) / (((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8])))) * ((+(((/* implicit */int) var_1))))));
                    var_30 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)24)), (-1154650258895076728LL)));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)18362)), (arr_20 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8])))) >= (((/* implicit */int) ((short) ((unsigned char) arr_34 [5] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8]))))));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_15 [i_8])) : (((/* implicit */int) arr_16 [i_8] [i_8] [i_8]))))))) : (((((/* implicit */_Bool) ((int) arr_14 [i_8 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19559))) : (((arr_35 [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (unsigned char i_13 = 3; i_13 < 13; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                for (unsigned short i_15 = 1; i_15 < 14; i_15 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) arr_23 [i_13 + 1]);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_8] [i_13] [i_8] [(unsigned short)5] [i_14] [i_15 + 1])) << (((/* implicit */int) ((((/* implicit */int) max((arr_15 [i_8]), (((/* implicit */short) (unsigned char)173))))) == (((/* implicit */int) arr_36 [(unsigned short)14] [i_14] [i_15 + 1])))))));
                    }
                } 
            } 
        } 
    }
    for (int i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        var_35 = max((((/* implicit */int) var_10)), (((int) arr_43 [i_16])));
        /* LoopNest 3 */
        for (unsigned char i_17 = 2; i_17 < 23; i_17 += 3) 
        {
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    {
                        var_36 |= ((/* implicit */unsigned short) ((_Bool) ((arr_50 [i_16] [i_16] [i_16] [i_16]) != (((/* implicit */long long int) arr_43 [i_16])))));
                        var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_43 [i_19]), (((/* implicit */int) arr_42 [i_17 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)246))))) : (((/* implicit */int) ((unsigned short) ((short) arr_48 [i_17 - 1]))))));
                        var_38 = ((/* implicit */long long int) arr_45 [i_16] [i_16] [i_16]);
                    }
                } 
            } 
        } 
        var_39 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)14835)))))) <= (max((var_0), (arr_50 [i_16] [(short)19] [(short)19] [i_16]))))))));
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 19; i_20 += 3) 
    {
        var_40 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_20 + 2] [i_20 + 2] [i_20 - 1] [i_20 - 1] [i_20 + 1])) % ((-(((/* implicit */int) (short)32767))))));
        var_41 = ((/* implicit */unsigned short) ((short) 1725701064));
        var_42 -= ((/* implicit */_Bool) arr_52 [14]);
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (unsigned char i_23 = 1; i_23 < 20; i_23 += 3) 
                {
                    for (unsigned short i_24 = 1; i_24 < 18; i_24 += 3) 
                    {
                        {
                            var_43 = (+(((/* implicit */int) arr_60 [i_20 - 1] [i_20 + 2] [i_23 + 1] [i_24] [i_22] [i_24 - 1])));
                            var_44 = ((/* implicit */unsigned char) arr_58 [i_20 - 1] [i_22] [i_23 - 1] [i_23]);
                            var_45 = ((/* implicit */long long int) ((unsigned char) arr_61 [i_20] [i_20] [i_20 - 1] [i_20 + 2] [(unsigned char)16]));
                            var_46 &= (-(((/* implicit */int) arr_45 [i_20 + 2] [i_20 + 2] [i_24 - 1])));
                            var_47 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49153)) ? (((/* implicit */int) ((short) (unsigned short)15))) : (-24)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_26 = 2; i_26 < 20; i_26 += 3) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_48 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_48 [i_25])) ? (arr_68 [i_21] [i_26 - 1] [(unsigned short)14]) : (var_7))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -4801179217650631380LL)) ? (((/* implicit */int) arr_52 [i_20 - 1])) : (((/* implicit */int) arr_73 [i_20] [i_20] [i_25] [0] [i_26] [i_27])))))));
                            var_49 += ((/* implicit */unsigned short) ((arr_50 [i_20] [i_20 - 1] [i_21] [i_26 - 2]) == (arr_64 [i_26 - 2] [(_Bool)1] [(short)12] [i_26 - 1] [i_26 - 2])));
                        }
                    } 
                } 
                var_50 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_21])) ? (((/* implicit */int) arr_57 [i_25] [(short)12] [i_20])) : (((/* implicit */int) arr_57 [(short)4] [4] [i_25]))))) ? (((/* implicit */int) (_Bool)1)) : (arr_71 [i_20] [(unsigned char)12])));
                /* LoopSeq 1 */
                for (short i_28 = 1; i_28 < 20; i_28 += 4) 
                {
                    var_51 = ((/* implicit */unsigned short) ((short) arr_73 [i_28 + 1] [i_28] [i_28 + 1] [(_Bool)1] [i_28] [i_28 + 1]));
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_76 [i_20] [i_20] [i_20 + 2] [i_20] [i_20] [i_20 + 1]))) >= (-144220993811246511LL)));
                }
            }
            for (short i_29 = 0; i_29 < 21; i_29 += 3) 
            {
                var_53 += ((/* implicit */long long int) var_9);
                var_54 = ((/* implicit */int) ((((/* implicit */int) arr_67 [i_20 - 1])) == (((/* implicit */int) (_Bool)1))));
            }
            var_55 = ((/* implicit */unsigned short) arr_66 [i_20]);
            var_56 = ((/* implicit */unsigned short) arr_48 [i_20 + 1]);
        }
    }
    var_57 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_30 = 0; i_30 < 13; i_30 += 3) 
    {
        var_58 &= ((/* implicit */short) ((((/* implicit */int) arr_52 [i_30])) ^ (((((/* implicit */_Bool) (short)-10666)) ? (((/* implicit */int) arr_32 [i_30] [i_30] [i_30])) : (((/* implicit */int) arr_51 [2LL]))))));
        var_59 = ((/* implicit */_Bool) (~(arr_82 [i_30])));
        var_60 = ((/* implicit */int) max((var_60), (((((((/* implicit */int) (unsigned short)47101)) != (((/* implicit */int) arr_52 [i_30])))) ? (((/* implicit */int) arr_44 [i_30] [i_30] [i_30])) : (((/* implicit */int) arr_57 [i_30] [(short)18] [i_30]))))));
    }
}
