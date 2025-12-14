/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29694
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
    var_10 &= ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) < (((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) (unsigned short)11885)))))) ? (((((/* implicit */_Bool) min(((unsigned short)53650), (((/* implicit */unsigned short) (short)5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) (signed char)20))))) : (var_4))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)7353)) : (((/* implicit */int) (short)9181))))), (var_4)))));
    var_11 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12663))) : (var_3)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 8190U)) ? (3988663830U) : (32256U))), (((/* implicit */unsigned int) ((_Bool) (short)3468)))))) : ((-(var_3))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57291)) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)20)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (10256008422393926264ULL)));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2] [(signed char)10] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) (unsigned short)53650)) : (((/* implicit */int) arr_13 [13ULL] [i_2] [i_4] [i_4 + 2] [i_4]))));
                            var_13 = ((/* implicit */int) (short)-9907);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 1]))) : (var_4)));
                            arr_21 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */signed char) 8079029300894653449ULL);
                            var_15 -= ((/* implicit */unsigned short) (signed char)13);
                            arr_22 [i_1] [(short)19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) arr_13 [11ULL] [i_1 + 3] [i_2] [i_5 + 1] [i_6])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) <= (var_3))))));
                        }
                    } 
                } 
            }
            arr_23 [i_0] [i_0] [i_1] = arr_7 [i_0];
            arr_24 [i_1 + 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)42934)) && (((/* implicit */_Bool) (short)10693)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 + 1] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_13 [(unsigned short)9] [12ULL] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3458))) : (7U)))));
            var_16 = ((/* implicit */unsigned short) -2084635713);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) 
            {
                {
                    arr_36 [18] [i_7] [i_7] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))) ? ((+(((/* implicit */int) arr_20 [i_7] [i_8])))) : (((/* implicit */int) arr_17 [i_7] [(unsigned char)1])))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_7])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_7] [16] [i_7])), ((unsigned short)53651)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (4979769559366521805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21419))))))))))))));
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) 286754714)) ? (((/* implicit */int) (short)-3454)) : (((/* implicit */int) (signed char)31))));
                    arr_37 [(short)17] [(unsigned char)9] [i_9 + 3] = ((/* implicit */signed char) ((((/* implicit */int) max(((short)13284), ((short)(-32767 - 1))))) >> (((((/* implicit */int) ((unsigned short) max((16276308432066941499ULL), (((/* implicit */unsigned long long int) 560305444U)))))) - (37433)))));
                    arr_38 [i_7] [i_8] [i_9] = ((/* implicit */signed char) min((max((((/* implicit */int) arr_6 [i_9 - 1])), (131071))), (((var_7) ? (((/* implicit */int) arr_6 [i_9 + 2])) : (201326592)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    {
                        arr_48 [i_12] [i_10] [(short)19] [i_10] [i_10] [i_7] = ((/* implicit */short) ((unsigned short) arr_35 [i_10] [i_11] [i_12]));
                        arr_49 [i_7] [i_10] [i_10] [i_12] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) min((var_1), (1148594178)))))) >> (((((((/* implicit */_Bool) arr_47 [i_7] [i_12 - 1] [i_11] [i_12 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_12 - 1] [i_11] [i_7] [i_12 - 1]))) : (2097148U))) - (57755U)))));
                    }
                } 
            } 
            arr_50 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 1148594178)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10] [i_7]))) : ((+(((((/* implicit */_Bool) -1148594179)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 4294967295U))));
        }
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_41 [i_7] [i_13]);
            var_21 ^= ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)70)), ((unsigned short)137)));
            arr_53 [i_7] [i_7] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((1450477586U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7])) || (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -201326610)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [(unsigned short)14] [i_13] [16U] [i_7] [(unsigned short)14] [i_7]))))) + (((((/* implicit */_Bool) (unsigned short)4278)) ? (var_0) : (var_0)))))));
        }
        var_22 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2439125126U)) ? (((/* implicit */int) (unsigned short)63610)) : (((/* implicit */int) arr_41 [i_7] [i_7]))))), (min((0ULL), (arr_30 [i_7] [i_7]))))), (((/* implicit */unsigned long long int) (unsigned short)40332))));
        arr_54 [i_7] = 18446744004990074880ULL;
    }
}
