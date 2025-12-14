/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22010
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
    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_12))));
    var_14 *= ((/* implicit */int) ((((((/* implicit */int) max((var_7), ((unsigned short)0)))) == (((530974723) * (((/* implicit */int) (unsigned short)0)))))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14677)) % (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) * (((((/* implicit */_Bool) 13667940905964129785ULL)) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))));
        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9430875788179333719ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10)))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_3)) & (var_0))))), (arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [3ULL] [21ULL] [21ULL] [3ULL] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_6 [i_0] [i_1] [i_2 + 1] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11958575185534608837ULL)) ? (-1204053496) : (var_1))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned short)60336))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (9430875788179333719ULL)))))));
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [10])))) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [(unsigned short)3])))))))));
                    var_18 += ((/* implicit */unsigned short) min((max((min((arr_6 [i_2] [i_1 + 3] [i_1] [i_0]), (10871028986814513098ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7575715086895038513ULL)) ? (var_2) : (var_2)))))), (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_2 - 3] [i_2 - 4] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 4; i_3 < 23; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (int i_6 = 3; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_5] [i_4] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) ((var_2) != (((/* implicit */int) var_6)))))))) ? (-955371087) : (((/* implicit */int) ((arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                        var_19 = ((/* implicit */unsigned short) 14583821473235000279ULL);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            arr_24 [i_7] [i_3] = ((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_3 + 1] [0ULL])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned short)36257)) : (((/* implicit */int) (unsigned short)0))))), (13613780019201592159ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10492847111682726659ULL) == (11585597773617878509ULL))))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_23 [(unsigned short)20] [i_3 - 4]) - (arr_23 [i_3 - 4] [i_3 - 1])))) / (max((((/* implicit */unsigned long long int) var_6)), ((~(var_10))))))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */unsigned short) (~((~(arr_11 [i_3] [i_3])))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)62760))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */int) var_9);
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    arr_38 [i_3] [0] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])))) || (((/* implicit */_Bool) arr_36 [i_3 - 3]))));
                    arr_39 [i_3 - 1] [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) var_7);
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (unsigned short)19367))));
                    var_25 = ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54357))))) : (arr_32 [i_3 - 3] [i_3]));
                }
                arr_40 [i_3] [i_3 + 1] [(unsigned short)12] [i_10] = (+(((/* implicit */int) (unsigned short)65533)));
                var_26 = ((/* implicit */unsigned short) (((~((-2147483647 - 1)))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)13059)) : (((/* implicit */int) (unsigned short)0))))));
                var_27 = ((/* implicit */unsigned short) ((arr_28 [i_3 - 4]) * (((/* implicit */unsigned long long int) arr_17 [i_3 - 1] [i_3 - 2] [i_3]))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 4; i_13 < 22; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_3 - 2] [i_3 - 2] [i_12] [i_13 - 3])) ^ (((/* implicit */int) var_12))));
                            var_29 = (-(11958575185534608831ULL));
                            arr_51 [3] [4] [i_12] [i_9] [i_3] = ((/* implicit */unsigned long long int) (-((~(var_0)))));
                        }
                    } 
                } 
                var_30 = (+(((/* implicit */int) arr_27 [i_3 - 2] [i_3] [i_3 + 1])));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_32 [i_3] [i_3])))) ? (arr_13 [i_3 - 4] [i_3 - 4] [i_3 - 4]) : (arr_30 [i_3 + 1] [i_9]))))));
            }
            var_32 = ((/* implicit */int) 16838045104243453178ULL);
        }
    }
    var_33 = ((/* implicit */unsigned short) -2147483619);
}
