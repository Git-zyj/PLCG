/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20843
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((arr_1 [i_0] [i_0]) | (var_1))));
        var_15 = ((arr_0 [i_0] [i_0]) & ((-9223372036854775807LL - 1LL)));
        var_16 = ((/* implicit */long long int) ((9186590428977083910LL) < ((~(((((/* implicit */_Bool) 7646515442137898144LL)) ? (7585929500109186338LL) : (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) (~(max((var_12), (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) max((var_1), (var_8)))) ? (-7585929500109186325LL) : (-2498305396761996508LL))) : (((7429750665767063675LL) ^ ((-9223372036854775807LL - 1LL)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 += ((/* implicit */long long int) ((((288228177128456192LL) << (((3425932919606990985LL) - (3425932919606990980LL))))) > (-1LL)));
                        var_18 &= max((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3])) ? (var_2) : (arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3]))), (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (arr_9 [i_0] [i_1] [i_2] [i_1])))) ? ((+(var_5))) : (((((/* implicit */_Bool) 2845695031729306129LL)) ? (7997289662765126739LL) : (4396388930236932298LL))))));
                        arr_13 [i_2] [i_1] = min((arr_5 [i_0] [i_0]), (max(((~(7478457817557244812LL))), (var_6))));
                        var_19 = ((((/* implicit */_Bool) max((arr_5 [i_1] [i_1]), (var_1)))) ? (max((arr_9 [i_0] [18LL] [18LL] [i_3]), (var_9))) : (((long long int) var_5)));
                        var_20 = ((((/* implicit */_Bool) min((max((240712897609847909LL), (arr_8 [i_3] [i_0] [i_1] [i_0]))), (var_2)))) ? (max((2845695031729306129LL), (arr_5 [i_1] [i_2]))) : ((-((+(var_9))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_17 [i_4] = ((long long int) ((((/* implicit */_Bool) 1652025483821987885LL)) ? (arr_0 [i_4] [i_4]) : (var_13)));
        arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [12LL])) && (((/* implicit */_Bool) var_0))));
        var_21 = 7761188332238955031LL;
        var_22 = (~(arr_12 [i_4] [i_4] [i_4] [9LL] [i_4] [i_4]));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (arr_19 [i_5] [i_5])));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_28 [i_5] [i_7 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775798LL))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) arr_10 [i_7 + 2] [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_5])) ? ((-(arr_5 [i_6] [i_7 - 1]))) : (((long long int) 5987082376000084282LL))))));
                        arr_33 [i_5] [i_5] [i_5] [i_6] [i_7] [6LL] = ((long long int) -6324559100025284374LL);
                        arr_34 [i_6] [i_6] [i_8] = (-(240712897609847927LL));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) (!(((arr_3 [i_7] [i_7]) > (var_2)))));
                        arr_38 [i_5] [i_6] [i_7 - 1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5486187617083530811LL)) ? (68719474688LL) : (5750781717474692744LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2935971183336284532LL)) || (((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_7 + 2])))))) : (0LL));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((long long int) arr_22 [i_5] [i_6] [i_7 + 2]))));
                            var_27 = ((/* implicit */long long int) min((var_27), (var_7)));
                            var_28 = (-(var_3));
                            var_29 += ((/* implicit */long long int) ((((long long int) var_12)) == (arr_4 [i_5] [i_5] [i_5])));
                        }
                        arr_43 [i_5] [i_6] [i_7 + 2] [i_7 + 2] = var_8;
                        arr_44 [i_5] [12LL] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) var_7)) ? (var_12) : (((long long int) 3425932919606990985LL)));
                    }
                }
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_12 = 2; i_12 < 6; i_12 += 3) /* same iter space */
        {
            arr_53 [i_11] = var_3;
            var_30 += ((/* implicit */long long int) ((-9223372036854775783LL) == (min((((arr_30 [i_11] [i_12 + 2]) - (var_5))), (((((/* implicit */_Bool) 4396388930236932298LL)) ? (-4962233201736320180LL) : (7585929500109186338LL)))))));
            var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2991895239880634656LL), (1336394606653449387LL)))) ? (4199576105263134575LL) : (((/* implicit */long long int) ((/* implicit */int) ((-6093524020971631805LL) == (3600018157639057277LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((9223372036854775807LL), (var_0))) == ((+(arr_47 [i_12]))))))) : (((((/* implicit */_Bool) ((var_0) / (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) < (arr_5 [i_11] [i_11]))))) : ((-(5262730638551748214LL)))))))));
            var_32 = (+((-(arr_11 [i_11] [i_12 + 1] [i_12 - 1] [i_12 + 3] [i_12] [i_11]))));
        }
        /* vectorizable */
        for (long long int i_13 = 2; i_13 < 6; i_13 += 3) /* same iter space */
        {
            var_33 = ((arr_3 [i_11] [i_13 + 4]) - (arr_11 [i_11] [i_13 - 2] [i_13] [i_13 - 1] [i_13 + 3] [i_11]));
            arr_58 [i_13] [i_11] [i_11] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_0))))));
            arr_59 [i_11] [i_13] [i_13 + 4] = var_10;
        }
        arr_60 [i_11] [i_11] = ((((long long int) arr_29 [i_11] [i_11] [i_11] [i_11])) << (((((((/* implicit */_Bool) -5799315697795031032LL)) ? (arr_4 [i_11] [i_11] [3LL]) : (arr_4 [i_11] [i_11] [i_11]))) - (7089099666782150695LL))));
        var_34 = max(((-((-(arr_27 [i_11] [i_11] [i_11]))))), (((((/* implicit */_Bool) max((var_5), (1718654313509521168LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11] [i_11] [i_11] [i_11])))))) : (((((/* implicit */_Bool) arr_47 [i_11])) ? (-7280252906595535127LL) : (var_4))))));
    }
    var_35 = ((/* implicit */long long int) min((var_35), (max(((~(max((var_4), (var_11))))), ((+(var_10)))))));
    var_36 -= ((/* implicit */long long int) (~(((/* implicit */int) ((min((var_4), (var_10))) > (min((var_11), (var_12))))))));
}
