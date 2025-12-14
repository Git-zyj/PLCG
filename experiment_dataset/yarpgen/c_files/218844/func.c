/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218844
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] [13LL] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((7014020351135063403LL) & (var_1))))));
                                arr_17 [i_3] |= ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) >= (6917529027641081856LL)));
                                arr_18 [i_0] [i_3] [i_4] = (-(6258742523946319403LL));
                                arr_19 [i_0] [i_0] [i_2 - 1] [i_3] = ((/* implicit */long long int) ((var_5) >= (((long long int) 6917529027641081865LL))));
                                var_11 = ((/* implicit */long long int) min((var_11), (((long long int) -2439151227566038233LL))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(0LL))))));
                    arr_21 [i_0] [i_0] = ((long long int) max((-5371009831170366877LL), (((9223372036854775800LL) % (6917529027641081865LL)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        var_12 = 9223372036854775794LL;
                        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4650977983885186389LL)) ? ((-9223372036854775807LL - 1LL)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1511764781390851114LL)))))) : ((+((-9223372036854775807LL - 1LL)))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 137995764446471600LL))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((((arr_12 [i_2] [0LL] [i_1 + 1] [i_6] [i_2]) + (9223372036854775807LL))) << (((var_7) - (1719930192996391591LL))));
                        arr_28 [i_0] = ((((/* implicit */_Bool) -8095698829942344902LL)) ? (5371009831170366876LL) : (31LL));
                        var_17 = ((/* implicit */long long int) min((var_17), (((7158317165853370318LL) ^ ((-(-6917529027641081872LL)))))));
                        arr_29 [i_1 + 3] [i_1] [i_2] [i_6] [i_6] &= ((((/* implicit */_Bool) (-(-5813206611238026391LL)))) ? (var_3) : (((((/* implicit */_Bool) var_6)) ? (0LL) : (9223372036854775800LL))));
                    }
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_18 ^= ((((/* implicit */_Bool) ((var_1) << (((((((-9223372036854775792LL) - (-9223372036854775767LL))) + (61LL))) - (35LL)))))) ? (max((-2979636720465823564LL), (896413365050715494LL))) : (((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_2 + 4] [i_7] [i_7])) ? (arr_9 [i_0] [i_1 + 1] [i_2 - 3] [i_7]) : (max((8579887962746040951LL), (8042351712048433544LL))))));
                        arr_32 [i_0] [i_0] = max(((-(((arr_4 [i_0] [i_1] [i_1]) % (9223372036854775779LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5462081023249954894LL)) ? (-2979636720465823564LL) : (5602865170651239107LL)))) && (((/* implicit */_Bool) min((var_4), (arr_2 [i_2 + 2] [i_1 + 2]))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((long long int) 6917529027641081879LL))));
                        var_20 = ((((/* implicit */_Bool) ((-7158317165853370334LL) & (-665446303399690635LL)))) ? (((896413365050715494LL) % (-1LL))) : (var_8));
                        arr_35 [8LL] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (min((var_8), (-5208681099391337928LL))) : (((((/* implicit */_Bool) 5208681099391337928LL)) ? (-5208681099391337928LL) : (8989607068696576LL)))))) ? (-6696011780050388936LL) : ((~(max((3180700570357930407LL), (-5767485932832999972LL))))));
                        var_21 = ((((/* implicit */_Bool) ((var_0) & (arr_31 [i_8] [i_1 - 1] [i_8])))) ? (((long long int) 8989607068696576LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        arr_36 [i_8] [i_0] [i_2] [i_1 + 1] [i_0] [i_0] = ((((((((/* implicit */_Bool) -5208681099391337933LL)) ? (-4880581497062209119LL) : (4613931900350821186LL))) >= (((((/* implicit */_Bool) 896413365050715492LL)) ? (144044819331678208LL) : (var_8))))) ? (-3928194408507472114LL) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 8604869556612652451LL)) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) min((var_4), (0LL)))))))));
                    }
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3614573148539089770LL))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        arr_45 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3928194408507472114LL)) ? (-8771437256801320316LL) : (var_10)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-896413365050715492LL) & (17592051826688LL)))))))));
                        arr_46 [i_10] [i_9] &= -5467553526576833972LL;
                        arr_47 [i_10] [i_9] |= (-9223372036854775807LL - 1LL);
                        arr_48 [i_9] [i_9] [i_9] [i_9] &= max((max((((((/* implicit */_Bool) 4613931900350821203LL)) ? (-4186036036980828764LL) : (var_8))), (((((/* implicit */_Bool) var_2)) ? (-918918538653463932LL) : (5667946645524619318LL))))), ((-(arr_31 [i_9] [i_9] [i_10]))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((((arr_39 [i_10]) << (((var_1) - (4414519122028509200LL))))) & (((((/* implicit */_Bool) ((long long int) 9222246136947933184LL))) ? (5667946645524619301LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -8961056739259578760LL)) && (((/* implicit */_Bool) 4812174246454947657LL))))))))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (0LL)));
                            var_25 = (+((-9223372036854775807LL - 1LL)));
                        }
                    }
                } 
            } 
            var_26 ^= min((min((arr_1 [i_9]), (384LL))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_1 [i_0]) : (var_0))));
        }
        arr_53 [i_0] = (-(-1LL));
    }
    var_27 = var_0;
    var_28 -= ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_3))))));
    var_30 = var_4;
}
