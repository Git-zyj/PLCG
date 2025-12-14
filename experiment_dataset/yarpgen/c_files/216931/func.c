/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216931
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15407924131058379802ULL)) ? (((/* implicit */unsigned long long int) 719690346U)) : (15257388507123978162ULL)))) || (((/* implicit */_Bool) min((((/* implicit */signed char) var_8)), (var_10)))))))) != (((unsigned int) (~(15407924131058379802ULL))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((3038819942651171830ULL) > (15407924131058379802ULL)));
        var_15 = ((/* implicit */unsigned long long int) var_6);
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2763159197113828359LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (-7257796187491438863LL))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0 + 1] [i_0 + 3] [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (-(arr_6 [i_0] [i_1] [9U])))), (((((/* implicit */_Bool) -3002431320467144863LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 4746718440024374546ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9))), ((-(4294967295U))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((signed char) 18446744073709551613ULL))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_5 [i_0 + 1]))))), ((~(((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 3]))))));
                        arr_17 [i_1] [i_1] [i_0] [i_1 + 1] [i_1] = ((/* implicit */long long int) 9285104385081770206ULL);
                    }
                }
            } 
        } 
    }
    for (int i_6 = 4; i_6 < 15; i_6 += 1) 
    {
        arr_20 [i_6 - 3] = ((/* implicit */unsigned int) var_0);
        var_19 *= ((/* implicit */unsigned int) (+(((3146406280929392607ULL) & (((/* implicit */unsigned long long int) arr_18 [i_6 - 2]))))));
        arr_21 [i_6 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((15257388507123978162ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((unsigned int) arr_1 [i_6 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_25 [i_7] = (!(((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) 1975088155)) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) arr_13 [i_7])))))))));
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 4050668361869477444LL)), (3038819942651171813ULL)));
                        var_21 = ((/* implicit */signed char) (+(max((16710642197547394226ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-7257796187491438863LL)))) ? (((/* implicit */int) ((signed char) -669743910))) : (((/* implicit */int) ((arr_4 [i_7] [i_11]) == (var_2))))));
            arr_38 [i_7] [i_7] = ((((/* implicit */_Bool) arr_1 [i_7])) ? (2125688780U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_7] [i_7]))));
        }
        /* LoopNest 3 */
        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 22; i_13 += 1) 
            {
                for (int i_14 = 3; i_14 < 20; i_14 += 1) 
                {
                    {
                        var_23 -= ((/* implicit */signed char) ((int) ((_Bool) 2845323892514521015LL)));
                        var_24 = ((/* implicit */unsigned int) var_1);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3932714016U)) > (2049997815578705250LL)));
                    }
                } 
            } 
        } 
        arr_48 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123)))))));
    }
}
