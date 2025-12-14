/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238309
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (2687071278167561506LL) : (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))) : ((((_Bool)1) ? (2687071278167561506LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) ((arr_1 [i_0]) != (arr_1 [i_1])));
            var_14 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)15360)))) >= (((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))));
            var_16 = ((/* implicit */_Bool) ((signed char) var_1));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((-1578493004), (1578493021)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50175)))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (arr_8 [i_3])));
            var_19 = ((/* implicit */unsigned short) min(((+(arr_9 [i_3]))), (((/* implicit */unsigned int) arr_10 [i_4 + 1] [i_3]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) min((1578493004), (-1578493004)));
            var_21 = ((/* implicit */unsigned int) ((int) arr_15 [i_3] [i_3] [i_5]));
            var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_13 [i_3])) + (((/* implicit */int) arr_13 [i_5]))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_23 |= -1578493004;
                var_24 = ((/* implicit */unsigned int) ((((arr_15 [i_3] [i_3] [i_7]) / (arr_11 [i_3]))) <= (((/* implicit */long long int) min((min((1U), (((/* implicit */unsigned int) arr_12 [i_3] [i_6] [i_3])))), (((/* implicit */unsigned int) arr_12 [i_7] [i_6] [i_3])))))));
                var_25 = ((/* implicit */unsigned short) (~((-((~(arr_17 [i_3] [i_3])))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2687071278167561504LL)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (unsigned short)50175))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_3] [i_8 + 1] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned long long int) var_0)) : (var_8)));
                var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_3] [i_6] [i_8 + 1] [i_8 + 1]))));
            }
            /* LoopSeq 1 */
            for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(-1578493004))))));
                    var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_3])) <= (-1578493031)))) <= (((/* implicit */int) arr_29 [i_9] [i_9] [i_9 + 1] [i_9] [i_6] [i_9 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_15 [6] [i_6] [6]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_9 + 1])) : (((/* implicit */int) arr_13 [i_9 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_9 + 1])) ? (((/* implicit */int) arr_13 [i_9 + 1])) : (((/* implicit */int) (unsigned short)65535))))) : (min((((/* implicit */unsigned long long int) 2687071278167561514LL)), (3ULL)))));
                        var_32 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_9 - 1] [i_3]))) < (min((440321958U), (((/* implicit */unsigned int) arr_29 [i_3] [i_3] [i_9] [i_10 - 1] [i_3] [i_11])))))));
                    }
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 2; i_13 < 19; i_13 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62341)) ? (8735294995511051940LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3] [i_3])))))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) - (2572247221U)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) (((+(-169691615))) - (1578492999)));
                        var_36 = ((/* implicit */unsigned char) arr_26 [i_6] [i_6] [i_3] [i_12]);
                    }
                    var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_25 [14U] [i_6] [i_3] [18])))) > (max((((/* implicit */unsigned int) -169691615)), (71695848U))))))) - (((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (arr_18 [i_3] [i_12]))))))));
                    var_38 = ((/* implicit */signed char) var_6);
                }
                var_39 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((1555839339), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned short)60515)))))))), (var_0)));
            }
            var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_21 [i_3] [i_3] [(unsigned char)19] [i_3]))) + (((/* implicit */int) ((_Bool) arr_21 [i_3] [i_3] [i_6] [i_6])))));
        }
        for (int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_16 = 1; i_16 < 19; i_16 += 3) 
            {
                var_41 = ((/* implicit */unsigned short) (signed char)-66);
                var_42 = (~(((/* implicit */int) (_Bool)0)));
                var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_16 + 2] [i_16] [i_16 + 2] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_39 [i_16 + 1] [i_16 + 2] [i_16 + 2] [i_16] [5] [i_16 + 1] [i_16 + 1])) : (((/* implicit */int) arr_39 [i_16 + 2] [i_16 + 2] [i_16 - 1] [4] [18] [i_16 - 1] [i_16]))))) ? (((/* implicit */int) min((arr_16 [i_16 - 1] [i_16] [i_3]), (arr_16 [i_16 - 1] [i_16] [i_3])))) : (((-1578493004) & (-1578493004))));
            }
            var_44 = ((/* implicit */unsigned short) max((-4286075319280147605LL), (3130008669918409057LL)));
            var_45 -= ((/* implicit */signed char) ((unsigned char) ((signed char) (signed char)118)));
        }
        var_46 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_4)), (arr_23 [i_3] [i_3]))), (((/* implicit */unsigned int) ((arr_25 [i_3] [(_Bool)1] [i_3] [i_3]) ? (((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3])))))));
        var_47 &= ((/* implicit */signed char) arr_47 [(_Bool)0] [i_3] [i_3]);
    }
    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4286075319280147604LL)) ? (((/* implicit */int) var_7)) : (1578493004))))))));
        /* LoopSeq 2 */
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                var_49 = ((/* implicit */unsigned int) (unsigned char)92);
                var_50 = ((/* implicit */_Bool) var_6);
                var_51 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((_Bool) (unsigned short)32816))), (arr_36 [i_17] [i_17] [i_18] [i_18] [i_19])));
            }
            var_52 = ((/* implicit */short) 0U);
        }
        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            var_53 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_20] [i_20] [i_20] [20] [i_17]))));
            var_54 -= ((/* implicit */unsigned long long int) (((-(arr_11 [i_20]))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        var_55 = ((/* implicit */unsigned int) ((unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (arr_24 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    }
}
