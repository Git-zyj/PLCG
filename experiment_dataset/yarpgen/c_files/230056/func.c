/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230056
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
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_15))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_6 [i_1] [i_1])));
            arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4073959486695801297LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (signed char)58))))) ^ (arr_4 [i_1])))));
            var_20 = ((/* implicit */short) var_15);
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            arr_13 [i_0] [i_2] = ((/* implicit */short) var_11);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)-59))) ^ (((int) var_16))));
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0]))));
            var_22 *= ((/* implicit */_Bool) 53849072709688827LL);
            arr_18 [i_0] [i_3] [(short)24] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) >= ((~(-6616763704086632436LL)))));
        }
        arr_19 [i_0] |= ((/* implicit */long long int) min((((var_2) & (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [11U] [i_0])) == (((/* implicit */int) (short)21544)))))));
        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) -4073959486695801297LL)) : (arr_4 [i_0])))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_28 [i_4] [12U] [i_4] = ((/* implicit */short) var_9);
            arr_29 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) && (((/* implicit */_Bool) var_11))))) < (((/* implicit */int) arr_21 [i_4]))));
        }
        arr_30 [i_4] = (!(((/* implicit */_Bool) ((arr_11 [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_4] [i_4]))))));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_34 [i_6] = ((/* implicit */int) arr_11 [i_6] [i_6]);
        arr_35 [i_6] [i_6] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 3 */
        for (int i_7 = 3; i_7 < 22; i_7 += 1) 
        {
            arr_38 [(_Bool)1] [i_6] [i_6] = ((/* implicit */short) ((((long long int) var_17)) >> ((((-((+(((/* implicit */int) arr_0 [i_6])))))) + (64)))));
            /* LoopNest 2 */
            for (short i_8 = 3; i_8 < 20; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_45 [i_6] [20] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_16))))) || (((/* implicit */_Bool) (short)-14677)))))));
                        arr_46 [i_6] [(short)3] [(short)3] [i_8] [i_6] = ((/* implicit */unsigned int) min((53849072709688827LL), (53849072709688827LL)));
                    }
                } 
            } 
            arr_47 [i_6] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_41 [i_7 - 2] [i_7 - 2] [i_7]))))) - (((((((/* implicit */_Bool) arr_36 [16] [i_6])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) / (var_1)))));
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_50 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(var_8))) ^ (min((((/* implicit */long long int) arr_41 [i_6] [i_6] [i_6])), (53849072709688827LL)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (-835775809) : (var_9)))), (var_3))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_44 [i_10] [i_10 + 1] [17ULL] [17ULL])))));
            var_23 &= ((/* implicit */unsigned long long int) (+(-5259494752407943922LL)));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_24 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_24 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6]))) : (var_11))));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_8))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)18869)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_16)), (var_9)))))) ? ((-(arr_43 [i_6]))) : (((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)1)))))))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((signed char) var_2)))));
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            for (short i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                for (int i_17 = 1; i_17 < 22; i_17 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_5)) >= (((/* implicit */int) var_17))))));
                        var_29 += ((/* implicit */unsigned int) (+(((long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)21544))) / (-53849072709688827LL))))));
                        arr_71 [22ULL] [i_14] [i_16] [i_14] = ((/* implicit */unsigned long long int) ((short) (-((-(((/* implicit */int) var_0)))))));
                        var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_67 [i_16] [i_17] [i_14] [(_Bool)1])) ? (arr_67 [(_Bool)0] [i_15] [i_14] [(_Bool)1]) : (-6078193508618204738LL))) & (((/* implicit */long long int) ((((-819973798) != (((/* implicit */int) var_5)))) ? (2676130571U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
        } 
    }
}
