/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4018
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
    var_14 &= ((/* implicit */unsigned int) -862070364);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (short)-21343)))))), (var_9)));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_16 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)21338))) & (12LL)));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_17 -= ((/* implicit */int) (short)21352);
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_6 [(unsigned char)6] [i_0 + 1] [i_1 + 1])), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3782686596U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-21350)) != (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)21336))))))))))));
            }
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) min((min((var_6), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((short)-1629), (((/* implicit */short) arr_4 [i_1 + 1])))))))))))));
            var_21 = ((/* implicit */unsigned int) (!(((_Bool) arr_5 [i_0 + 2]))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_2 [(short)16] [i_3]))));
            var_23 = ((/* implicit */int) arr_9 [i_3]);
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_24 = ((/* implicit */short) ((((int) arr_11 [i_0] [i_4])) + ((+(((/* implicit */int) (_Bool)1))))));
            var_25 *= ((/* implicit */unsigned int) ((max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))))) >= (((/* implicit */long long int) var_3))));
            var_26 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (arr_2 [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0 + 1]))));
        }
        var_27 = ((/* implicit */unsigned char) (signed char)-29);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = var_8;
        var_28 = ((/* implicit */long long int) min((var_28), (var_13)));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_7 = 2; i_7 < 23; i_7 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_7 - 2])) == (((/* implicit */int) (unsigned char)216))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (_Bool)1))));
        }
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_8))));
            var_32 -= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6])))))) > (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_8))));
        }
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 1; i_10 < 23; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_6] [2LL] [i_10] [i_11] [i_10 + 1])) || (((/* implicit */_Bool) var_3)))))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (-1876139615) : (((/* implicit */int) var_10))))) & (arr_19 [i_10 + 1])));
                            var_35 += ((/* implicit */_Bool) ((short) arr_20 [i_10] [i_12]));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_28 [i_9] [i_6] [i_6]))));
            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_6))));
        }
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_6] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) var_12)))))));
            var_39 = ((/* implicit */long long int) max((var_39), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_12)))));
            var_40 = ((/* implicit */_Bool) (unsigned char)187);
            var_41 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_6] [i_13] [i_13])) != (((/* implicit */int) arr_16 [i_6]))));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 23; i_14 += 3) 
            {
                for (short i_15 = 1; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32758)))))) : (4043454469U)));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (short)21338))));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_13] [i_14] [i_6] [i_15 - 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
        {
            var_45 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_6] [i_16] [i_16])) || (((/* implicit */_Bool) (short)0))));
        }
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                for (int i_19 = 1; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_19 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (arr_23 [i_19] [i_19 + 1]))))));
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 7054880385158474181LL))))) * ((-(((/* implicit */int) arr_24 [14] [14])))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_49 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_11)));
                var_50 = ((/* implicit */short) min((var_50), (var_9)));
            }
            var_51 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (26U)));
        }
        var_52 &= var_9;
    }
}
