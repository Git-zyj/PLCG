/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240038
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39419))));
                var_11 = arr_1 [i_1] [6U];
                var_12 = ((/* implicit */short) arr_4 [(signed char)3] [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (signed char)-109))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((short) arr_7 [i_2])))));
        var_15 = 9034389727758251546ULL;
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [9ULL] [(signed char)3]))));
            var_17 = ((/* implicit */unsigned short) var_9);
        }
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            arr_15 [8ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1611021297)) || (((/* implicit */_Bool) (unsigned short)26117))));
            arr_16 [13U] = ((/* implicit */short) (~((+(((/* implicit */int) arr_14 [i_2] [i_2]))))));
            var_18 = ((/* implicit */signed char) ((unsigned long long int) (~(3436734347U))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39418))) > (1593193278U))))));
            arr_17 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((unsigned char) arr_13 [i_4 + 3] [i_4 + 3] [i_4]));
        }
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_14 [i_5] [i_5]))))));
        var_21 = max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(signed char)7])) && (((/* implicit */_Bool) (unsigned short)1111))))), (min((940221793), (((/* implicit */int) (short)-5371))))))), (arr_7 [i_5]));
        arr_21 [(unsigned short)3] = ((/* implicit */unsigned long long int) max((arr_12 [6ULL] [i_5] [i_5]), (((/* implicit */unsigned int) (+((+(arr_18 [i_5]))))))));
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned short) ((short) arr_12 [i_6] [i_6] [i_6]));
        var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)39419)) ? (1655625044) : (((/* implicit */int) var_5))))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            for (short i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                for (unsigned int i_9 = 2; i_9 < 13; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */long long int) 281474976710655ULL);
                        arr_32 [i_6] [i_8] = ((/* implicit */int) max((((((/* implicit */int) (unsigned short)16320)) < (((/* implicit */int) (unsigned short)22784)))), ((!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)39411)))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-3))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-953)), (1574606018)))) : (15740723765608160292ULL))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)49216), (((/* implicit */unsigned short) arr_25 [i_6] [i_8 + 1] [i_7 - 1])))))) * (((((arr_28 [(short)8] [(short)8]) * (((/* implicit */unsigned int) 1611021282)))) << (((max((0U), (((/* implicit */unsigned int) (short)3840)))) - (3815U)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (unsigned int i_11 = 3; i_11 < 13; i_11 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (unsigned char)181);
                    var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) < (-1611021282)))), (min((var_8), (((/* implicit */unsigned int) arr_10 [(signed char)13] [i_10])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        arr_43 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(508320546U)))), (arr_23 [8] [i_10])));
                        var_29 = 5151640249976783317ULL;
                    }
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 969921198U))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 11; i_14 += 4) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned char) max(((~(arr_41 [i_11 - 1] [i_13 - 1] [i_14] [i_13 + 1]))), (min((arr_41 [i_11 + 1] [i_13 - 1] [i_10] [i_13]), (((/* implicit */long long int) -114894140))))));
                                var_32 = ((/* implicit */unsigned char) ((short) 2312944260U));
                                var_33 = ((/* implicit */_Bool) var_6);
                                var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1167596994U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20685)) ? (((/* implicit */int) (unsigned short)16320)) : (min((arr_45 [i_6] [10] [i_11 - 2] [i_13]), (((/* implicit */int) (unsigned short)44851))))))) : (((((/* implicit */_Bool) -1220735711)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 4) 
    {
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (signed char)-64))));
        var_36 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_49 [i_15 - 2]))));
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_15] [i_15 - 1])) || (((/* implicit */_Bool) var_5))));
    }
    /* LoopNest 2 */
    for (short i_16 = 2; i_16 < 24; i_16 += 4) 
    {
        for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            {
                var_38 = ((/* implicit */long long int) (+(min((((unsigned long long int) arr_56 [i_17])), (((/* implicit */unsigned long long int) arr_55 [i_16]))))));
                /* LoopNest 3 */
                for (unsigned short i_18 = 1; i_18 < 23; i_18 += 3) 
                {
                    for (int i_19 = 1; i_19 < 22; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 1; i_20 < 21; i_20 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16322))) ^ ((+(2009242904U)))));
                                var_40 = ((/* implicit */unsigned int) (unsigned short)8423);
                            }
                        } 
                    } 
                } 
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) arr_62 [i_16] [i_17] [i_17] [i_17]))));
                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((long long int) (signed char)-95)))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned int) min((-114894117), (((/* implicit */int) ((min((((/* implicit */int) var_5)), (var_4))) >= (max((((/* implicit */int) (short)0)), (1048575))))))));
}
