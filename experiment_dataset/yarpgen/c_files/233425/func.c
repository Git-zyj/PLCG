/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233425
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) var_9);
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)-87);
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned short)34997)))), (((/* implicit */int) ((signed char) min((var_13), ((short)-1)))))));
                        arr_10 [i_3 - 1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))));
                    }
                } 
            } 
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((1032096982345089004LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1])))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30539)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)21326)))))));
        }
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_0])))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 3019703948U))))))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
            var_18 = ((/* implicit */long long int) arr_13 [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) (unsigned short)30980);
                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) (+(arr_0 [i_0]))));
                arr_18 [i_0 - 1] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_5] [(signed char)16]), (((/* implicit */unsigned short) arr_4 [i_0 + 1] [i_0] [i_0]))))) ? (((1810920348119415587ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 1]))))) : (((/* implicit */unsigned long long int) -2148548000704138206LL))));
            }
        }
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18052143054021398290ULL))), (((((/* implicit */_Bool) 2148548000704138205LL)) ? (17757802415855259395ULL) : (14469299449091642912ULL))))))));
        var_22 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -2148548000704138183LL)) : (((((unsigned long long int) -2148548000704138206LL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)34555)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)30981)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -2148548000704138210LL)))))));
            var_24 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) (unsigned short)64)) & (((/* implicit */int) (signed char)0)))), (((/* implicit */int) min(((unsigned short)33896), (var_2)))))) ^ (((/* implicit */int) max((arr_7 [i_0] [i_6]), (min((arr_7 [i_0] [i_6 - 1]), (arr_6 [i_0] [i_6 - 2] [i_6 - 2]))))))));
            var_25 = ((/* implicit */signed char) max((((unsigned char) arr_8 [(unsigned short)6] [i_6] [i_6] [i_6])), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) != (min((arr_12 [i_0] [i_6]), (((/* implicit */unsigned long long int) (unsigned short)30988)))))))));
        }
    }
    var_26 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13643)))))))))));
    var_27 -= var_2;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (signed char i_10 = 2; i_10 < 7; i_10 += 4) 
                {
                    {
                        arr_32 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8 - 2] [i_8] [i_8 - 1]))) & (2247042294U)));
                        arr_33 [i_10] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) var_0);
                        arr_34 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)4))));
                        arr_35 [i_8] [i_7] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) (~(2247042294U)));
                    }
                } 
            } 
            arr_36 [i_8] = ((((/* implicit */_Bool) ((long long int) var_4))) ? (((unsigned long long int) arr_22 [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) / (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))));
            var_28 = ((/* implicit */unsigned char) ((unsigned short) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_5))))));
            arr_38 [i_8] [i_8] = (signed char)-1;
        }
        arr_39 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554432U)) ? (2305843009196916736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_7])) : (((/* implicit */int) ((short) (unsigned char)29)))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7]))) * (6563846275547696523ULL)))) ? (arr_12 [3ULL] [3ULL]) : (10392183467446796034ULL)));
        arr_40 [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)40427)) - (((/* implicit */int) var_14)))))))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((arr_44 [i_11]) | (18446744073709551615ULL))))));
    }
    for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    arr_52 [i_13] = ((/* implicit */unsigned int) (-(((unsigned long long int) 394601019688153311ULL))));
                    arr_53 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max(((unsigned short)40422), (((/* implicit */unsigned short) (unsigned char)228))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2390974934U)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned short)17))))) ? (((/* implicit */int) (unsigned short)9097)) : (((/* implicit */int) (!((_Bool)1))))))));
                    var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-7345)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_14])) : (((/* implicit */int) arr_1 [i_14]))))));
                }
            } 
        } 
        var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12] [(unsigned char)6] [(unsigned char)6]))) : (1903992380U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)56438)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) : (9682927827952993752ULL)))))) ? (((/* implicit */int) ((short) (~(var_3))))) : (((/* implicit */int) (unsigned char)2))));
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) arr_17 [i_12] [i_12])) ? (((/* implicit */long long int) 4294967290U)) : (var_7))))), (((/* implicit */long long int) (unsigned short)8)))))));
        arr_54 [i_12] [5LL] = ((/* implicit */short) arr_9 [i_12] [i_12] [i_12]);
        arr_55 [i_12] = ((/* implicit */unsigned int) var_5);
    }
}
