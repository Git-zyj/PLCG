/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242411
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
    var_18 += var_16;
    var_19 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-4466887154499182702LL) : (4466887154499182687LL))), (5777617986139082965LL))) == (-3756281070009020706LL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 ^= min((max((min((-2078904012805898705LL), (4466887154499182687LL))), (((-3756281070009020706LL) - (-7736199544186743562LL))))), (((-4466887154499182684LL) - (min(((-9223372036854775807LL - 1LL)), (-7398043034634424962LL))))));
                    var_21 = max((max((6851738276326563461LL), (-1735088171358573337LL))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((long long int) -7398043034634424987LL)) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1]) >= ((-9223372036854775807LL - 1LL)))))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((((arr_5 [i_0]) != (arr_5 [0LL]))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (4871237849488538023LL) : (8013367089032447914LL))) : (max((-8609012455078882911LL), (arr_5 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1735088171358573337LL)) ? (arr_9 [i_0]) : (arr_1 [i_3])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (3761089178864935845LL) : (-806267647590638173LL))) : (2145208342057801228LL)))) ? (((arr_4 [i_0] [i_0]) - (-7370999039459819978LL))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (3762434057975941395LL) : (5306369573918884507LL))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                var_23 *= ((/* implicit */long long int) ((arr_3 [i_0]) <= (-752588020943959332LL)));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_24 = 1735088171358573351LL;
                            var_25 ^= ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) -4595722128846930747LL)))) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) ((-7952971050754685145LL) <= (5375098373971174399LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_25 [i_8] [i_4] [i_4] [i_4] [i_0] = 7993096028063756376LL;
                            var_26 = ((/* implicit */long long int) min((var_26), (((long long int) arr_7 [i_3 + 1] [i_4 - 1] [i_7]))));
                        }
                    } 
                } 
            }
            var_27 ^= min((-9184835718980702102LL), (min((((long long int) 5556113865195048571LL)), (-1058611644487949536LL))));
            var_28 = ((((/* implicit */_Bool) 5230130128584748828LL)) ? (((((-116669000749118986LL) == (-1814977056854884582LL))) ? (min((-2015268692395909112LL), (-8931708535070878888LL))) : (min((-6801643624606088806LL), (9184835718980702100LL))))) : (8083588284741664539LL));
        }
        /* LoopNest 2 */
        for (long long int i_9 = 3; i_9 < 11; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9184835718980702101LL)) ? (7181218345250528878LL) : (-1008421874226590164LL)))) ? (min((9223372036854775806LL), (arr_19 [i_9 - 3] [i_9 - 2] [i_9 - 1] [i_9 - 2]))) : (((((/* implicit */_Bool) arr_19 [i_9 - 2] [i_9 - 3] [i_9 - 1] [i_9 + 4])) ? (arr_19 [i_9 - 3] [i_9 + 1] [i_9 + 2] [i_9 - 3]) : (arr_19 [i_9 - 3] [i_9 - 3] [i_9 + 3] [i_9 + 3]))));
                    var_30 = min(((((((-9223372036854775807LL - 1LL)) > (4748455918537043053LL))) ? (-4466887154499182689LL) : (min((1470947590329748871LL), (arr_0 [i_0] [i_10]))))), (9223372036854775807LL));
                }
            } 
        } 
    }
    for (long long int i_11 = 2; i_11 < 19; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                {
                    arr_40 [i_11] &= 0LL;
                    var_31 = ((((/* implicit */_Bool) 4710693740150887043LL)) ? (((((/* implicit */_Bool) max((-9156035747750811605LL), (arr_34 [i_13])))) ? (arr_38 [i_12] [i_12] [i_12] [9LL]) : (((((/* implicit */_Bool) arr_36 [i_11 + 1] [i_11 + 1])) ? (8524191580277197625LL) : (7370999039459819977LL))))) : (((max((-2280967897685874928LL), (-7181218345250528878LL))) % (max((-9156035747750811617LL), (3663005758214759425LL))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_14 = 2; i_14 < 20; i_14 += 1) 
        {
            for (long long int i_15 = 3; i_15 < 20; i_15 += 2) 
            {
                for (long long int i_16 = 2; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_15] [i_16] [i_16] [i_15])) ? (arr_46 [i_15] [i_15] [i_15] [i_15]) : (-9214312408504227581LL)))) && (((/* implicit */_Bool) arr_46 [i_15] [i_16] [i_15 + 2] [i_15]))));
                        var_33 = 618318990928340433LL;
                    }
                } 
            } 
        } 
    }
    var_34 = ((((/* implicit */long long int) ((/* implicit */int) ((((var_17) % (-1923865845282520736LL))) != (((((/* implicit */_Bool) 9156035747750811604LL)) ? (9214312408504227577LL) : (7181218345250528868LL))))))) % (var_10));
}
