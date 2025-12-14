/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21722
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
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1932426680))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) (~(arr_3 [i_0])));
            var_15 = ((/* implicit */unsigned int) arr_4 [i_1]);
            arr_5 [i_1] = ((/* implicit */signed char) (-(-1932426676)));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) || (((/* implicit */_Bool) var_7))));
            arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1932426675)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */unsigned long long int) 1932426680)) & (4503599627370495ULL)))));
        }
        for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            arr_11 [i_2 - 1] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33650))) : (arr_10 [i_2])))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) arr_16 [i_0] [i_2 - 2] [i_4 + 1] [i_4] [i_0] [i_5]);
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_5] [i_4 + 2] [i_3 - 3] [i_2 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_18 -= ((/* implicit */unsigned int) ((unsigned long long int) 2560827736U));
                            var_19 = ((/* implicit */signed char) arr_1 [i_3 - 3]);
                            var_20 = ((/* implicit */unsigned char) 1433153951U);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((-(-9LL))) | (min((((/* implicit */long long int) var_0)), (((long long int) var_0)))))))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned char i_8 = 3; i_8 < 14; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */int) arr_10 [i_10]);
                            var_23 = ((/* implicit */unsigned int) (~((~((((_Bool)1) ? (((/* implicit */long long int) arr_3 [i_7])) : (5622526079967216939LL)))))));
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */unsigned int) 219083783514561565ULL);
                            var_24 = ((/* implicit */short) ((unsigned long long int) arr_30 [i_9] [i_10 - 1] [i_8] [i_8 - 2] [i_9]));
                        }
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) ((signed char) var_9));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1932426671)) ? (((/* implicit */int) ((12177822489228659846ULL) < (((/* implicit */unsigned long long int) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34482)) && (arr_2 [i_11]))))))) ? (var_5) : (((unsigned long long int) arr_15 [i_8 - 2]))));
                        }
                        var_27 = ((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) ((_Bool) 3682128452066875853ULL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_36 [i_12] [i_12]), (((/* implicit */unsigned int) arr_38 [i_12] [i_12]))))) - ((+(arr_37 [i_12]))))))));
        /* LoopNest 3 */
        for (long long int i_13 = 4; i_13 < 21; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)19799), (((/* implicit */unsigned short) (_Bool)1)))))))) * (((arr_47 [i_12] [(_Bool)1] [(signed char)21] [i_15]) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -9LL)) : (0ULL))) : (((/* implicit */unsigned long long int) ((int) var_6)))))));
                        arr_49 [i_15] [i_14] [i_13 - 3] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 579193203U)) ? (13ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31067)) ? (4294967278U) : (((/* implicit */unsigned int) -1932426659))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_50 [i_12] [i_15] [i_14] [i_15] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_44 [i_12] [i_13 - 3])))), (((/* implicit */int) (!((_Bool)1))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            var_30 += ((/* implicit */long long int) (~(((unsigned long long int) arr_43 [i_16] [i_13 + 2]))));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((signed char) arr_51 [i_14] [i_15] [i_14])))));
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1932426676)) ? (var_5) : (arr_37 [i_13 - 3]))))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) (_Bool)0);
                            arr_57 [i_12] [i_12] [i_12] [i_13 - 3] [i_14] [i_15] [i_15] = ((((((/* implicit */_Bool) var_5)) ? (var_4) : (13693426388563727183ULL))) * (((/* implicit */unsigned long long int) var_9)));
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned int) ((arr_54 [i_12] [i_13]) > (((/* implicit */unsigned long long int) var_9))));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) & (6268921584480891769ULL)))) ? (((unsigned int) arr_59 [i_12] [(unsigned short)18] [i_14] [i_18] [i_18] [i_15] [i_14])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_18] [i_15] [i_13 + 2] [i_12]))))))));
                            arr_61 [i_14] [i_15] [i_14] [i_15] [i_18] = ((/* implicit */long long int) 443045757U);
                            arr_62 [i_12] [i_15] [i_14] [i_15] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
        arr_63 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)));
        var_36 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_47 [i_12] [i_12] [i_12] [i_12])), (arr_45 [i_12] [i_12] [i_12])))), (((unsigned int) (short)6914)))), (((/* implicit */unsigned int) ((((unsigned long long int) var_11)) < (arr_37 [i_12]))))));
    }
    for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
    {
        var_37 &= ((unsigned int) arr_38 [i_19] [i_19]);
        var_38 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_44 [i_19 + 3] [i_19 + 1]))))));
    }
    var_39 -= ((/* implicit */_Bool) var_4);
}
