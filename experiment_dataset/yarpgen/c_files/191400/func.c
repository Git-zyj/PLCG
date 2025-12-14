/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191400
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
    var_10 = ((/* implicit */signed char) ((14174110872335580218ULL) != (((/* implicit */unsigned long long int) 12622782))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) ((9539718783488648624ULL) | (12268338511776994109ULL)));
            arr_7 [i_0] [7ULL] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) var_5)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_12 ^= ((/* implicit */int) var_6);
        }
        var_13 = ((/* implicit */unsigned short) var_0);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */long long int) 9539718783488648626ULL);
            var_14 = (!(((/* implicit */_Bool) 9539718783488648613ULL)));
            var_15 = ((/* implicit */int) (-(8907025290220903012ULL)));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_17 [i_2] = ((/* implicit */unsigned int) (~(var_7)));
                        var_16 += ((/* implicit */_Bool) 10604959347972720505ULL);
                    }
                } 
            } 
            arr_18 [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6)));
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned char) (+(13634782501323072030ULL)));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_6] [i_5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    arr_30 [i_7] [11ULL] [i_5] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) > (var_4)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) 7841784725736831110ULL)))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6996141188910234351LL))))) << (((/* implicit */int) ((_Bool) 15401044659362510012ULL)))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10] [i_0] |= ((/* implicit */signed char) 1885747168250678636LL);
                        var_20 ^= ((/* implicit */unsigned char) ((15401044659362510019ULL) & (18431158249248590347ULL)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(8907025290220902980ULL))))));
                        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_23 &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_0))))));
                        arr_46 [i_0] [i_0] [1ULL] [i_5] [i_0] = ((/* implicit */unsigned int) (-((-(10986448230831868966ULL)))));
                    }
                    arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(3662922153U)))) - (4811961572386479587ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        arr_50 [i_8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((((/* implicit */_Bool) 3045699414347041608ULL)) || (((/* implicit */_Bool) 4811961572386479608ULL))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), ((+(13634782501323072007ULL)))));
                        arr_51 [i_0] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)));
                    }
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3662922163U)));
                }
                var_26 ^= ((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
            var_27 ^= ((/* implicit */signed char) (-(3955529036759635907ULL)));
            arr_52 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4191936580U)) ^ (16271190798130161170ULL)))) ? (17916450897072608325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        }
        arr_53 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)54))))));
    }
    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) 
    {
        var_28 += var_0;
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (unsigned short)42410))));
    }
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_8)))) << (((var_3) - (789875556U)))))), ((+(((((/* implicit */_Bool) var_3)) ? (3955529036759635911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100)))))))));
    /* LoopSeq 4 */
    for (int i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) min((var_31), ((-((~(4302034555882447732ULL)))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_1)) + (31))))) : (((/* implicit */int) var_0))));
        arr_59 [i_15] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_6))));
        var_33 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (6363383674289289834ULL)));
    }
    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_3)))))) ? (max((((6363383674289289834ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (min((13982298055003018639ULL), (((/* implicit */unsigned long long int) (signed char)-29)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_35 = ((/* implicit */int) min((var_35), ((~(((/* implicit */int) (signed char)-29))))));
    }
    for (unsigned char i_17 = 1; i_17 < 15; i_17 += 1) /* same iter space */
    {
        arr_67 [i_17] = ((/* implicit */unsigned int) (-((((-(((/* implicit */int) (signed char)-123)))) / ((-(((/* implicit */int) var_8))))))));
        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) max((14491215036949915701ULL), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)37))))), (max((7841784725736831110ULL), (14238397494655436643ULL))))))))));
    }
    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned short) 13634782501323072010ULL);
        arr_70 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (max(((~(var_4))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
    }
}
