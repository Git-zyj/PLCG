/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3977
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_12 [13ULL] [i_1] [i_0] = ((/* implicit */int) var_1);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)22);
                    var_11 -= arr_1 [i_0] [i_0];
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) << (((((/* implicit */int) (short)-10603)) + (10613))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_25 [i_5] = ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((1140223129U) - (1140223114U)))))) >= (max((((/* implicit */unsigned long long int) var_5)), (var_3))))))));
                        var_14 = ((/* implicit */unsigned int) (unsigned short)61766);
                        var_15 = var_4;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) arr_18 [5ULL] [i_7] [i_7]);
                    var_17 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) 2852168158509340586LL);
                        arr_39 [i_10] [9] = 3154744146U;
                        var_19 = ((/* implicit */unsigned short) ((3154744195U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-23961)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            arr_42 [14U] [i_9] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                            arr_43 [(short)12] [(short)12] [(short)12] [i_10] [i_11] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_3])) << (((((/* implicit */int) (unsigned char)203)) - (195)))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_10 [i_9] [i_9] [i_10]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_21 = (_Bool)1;
                arr_49 [i_3] [i_13] [i_14] = ((/* implicit */_Bool) -594467788);
                arr_50 [i_3] [i_13] [i_13] [1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2852168158509340586LL)) <= (17614863952689495604ULL)));
                var_22 = ((/* implicit */int) var_3);
            }
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) min((var_23), (-1979633473)));
                var_24 = ((/* implicit */unsigned long long int) ((short) ((2909903289U) * (var_6))));
                var_25 = ((/* implicit */int) min((arr_2 [i_3]), (((/* implicit */unsigned long long int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30638))) == (3154744192U))))))))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        {
                            var_26 = max((((/* implicit */unsigned long long int) (unsigned short)31027)), (arr_54 [5U] [5U] [i_15] [i_13] [15LL]));
                            var_27 = ((/* implicit */unsigned char) var_6);
                            arr_57 [8ULL] [i_13] [i_15] [i_13] [i_15] [(unsigned short)9] [i_15] = ((/* implicit */long long int) (~(746333006U)));
                            arr_58 [i_3] [i_3] [i_3] [i_3] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1008354286))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) (signed char)14);
            }
            for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    var_29 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                    var_30 = ((/* implicit */unsigned int) ((unsigned long long int) 3436684270U));
                }
                for (short i_20 = 2; i_20 < 16; i_20 += 2) 
                {
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((1254047015U) >> (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 1342137457951058951ULL))) || (((/* implicit */_Bool) arr_4 [i_3] [i_13]))))))))));
                    arr_66 [i_3] [i_13] [(unsigned char)11] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) 1140223104U));
                    arr_67 [i_13] = ((/* implicit */unsigned int) var_2);
                    arr_68 [i_20 + 3] [i_13] [i_13] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((4269744627562190243ULL) >= (((/* implicit */unsigned long long int) -1008354305))))), (((int) 1979633460))));
                    arr_69 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((unsigned int) 945433575U)) << (((unsigned int) ((arr_18 [i_3] [i_13] [11U]) < (((/* implicit */unsigned int) var_2)))))));
                }
                var_32 = ((/* implicit */_Bool) ((6102023920713245627ULL) / (((/* implicit */unsigned long long int) var_6))));
                var_33 = ((/* implicit */unsigned char) -1979633473);
            }
            /* vectorizable */
            for (short i_21 = 2; i_21 < 18; i_21 += 2) 
            {
                var_34 = ((/* implicit */short) -105834110807552235LL);
                var_35 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)128))));
                arr_73 [i_13] [i_13] [i_13] = ((/* implicit */short) ((int) ((unsigned long long int) arr_37 [i_3] [i_13] [i_21])));
            }
            arr_74 [i_13] = ((/* implicit */unsigned char) max((arr_47 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */int) ((((/* implicit */_Bool) -1979633464)) || ((_Bool)1))))));
            var_36 -= (-(arr_11 [i_3]));
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) 1979633446))));
            var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-16235))));
        }
        for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 1) /* same iter space */
        {
            arr_82 [i_23] = arr_5 [i_3];
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                var_39 -= ((/* implicit */unsigned long long int) ((((unsigned long long int) 1510376378)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))));
                arr_85 [i_3] [i_23] [i_23] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)8035)) >> (((((/* implicit */int) (unsigned short)31029)) - (31024)))));
                var_40 = ((/* implicit */signed char) 6102023920713245632ULL);
                /* LoopSeq 1 */
                for (int i_25 = 2; i_25 < 16; i_25 += 4) 
                {
                    var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-3902640584754902138LL)));
                    arr_88 [i_3] [i_23] = min((max((max(((unsigned short)34507), (((/* implicit */unsigned short) (unsigned char)103)))), ((unsigned short)50549))), (((/* implicit */unsigned short) (unsigned char)103)));
                    var_42 = ((/* implicit */unsigned short) (short)-17671);
                    var_43 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)14983)) >> (((/* implicit */int) (_Bool)1)))) >> (((((((min((((/* implicit */int) (signed char)-102)), (-842102156))) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-27550)), (var_5)))) - (6658))))) - (1305381468)))));
                    arr_89 [i_23] [i_23] [(unsigned short)7] [i_25] [i_25] [i_3] = ((unsigned short) 474192698U);
                }
                arr_90 [i_23] [i_23] [(unsigned short)1] [i_23] = ((/* implicit */unsigned short) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            arr_91 [i_3] [9U] [i_23] = arr_1 [i_23] [i_3];
            arr_92 [i_23] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))) != ((+(((/* implicit */int) arr_29 [i_3] [i_23]))))));
            var_44 -= max((((unsigned long long int) ((short) arr_6 [11ULL]))), (((/* implicit */unsigned long long int) 1652342796U)));
        }
        /* LoopNest 3 */
        for (unsigned int i_26 = 0; i_26 < 20; i_26 += 2) 
        {
            for (unsigned char i_27 = 0; i_27 < 20; i_27 += 1) 
            {
                for (long long int i_28 = 0; i_28 < 20; i_28 += 1) 
                {
                    {
                        var_45 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [i_27])) < (var_4)));
                        arr_102 [i_3] [i_26] [i_26] [i_28] |= ((/* implicit */unsigned long long int) min((min((((var_7) | (((/* implicit */int) (signed char)66)))), (-293161016))), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_53 [i_28] [0U] [i_26] [0U])), (16375548059064934523ULL))) == (((/* implicit */unsigned long long int) ((arr_87 [(signed char)7] [i_26] [i_27]) ^ (((/* implicit */int) arr_77 [i_27]))))))))));
                        arr_103 [i_3] [i_3] [(_Bool)1] [i_3] [i_27] = ((((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) 9393835308034140055ULL)) || (((/* implicit */_Bool) var_2))))))) != ((~(((/* implicit */int) var_5)))));
                        var_46 = ((/* implicit */signed char) min((max((arr_75 [i_27]), (((/* implicit */unsigned long long int) -26803)))), (((/* implicit */unsigned long long int) arr_59 [i_28] [i_27] [i_3]))));
                    }
                } 
            } 
        } 
    }
    var_47 = ((/* implicit */short) (signed char)36);
}
