/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50679
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */unsigned long long int) 760442133U)) : (14098526384406376735ULL));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_18))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((long long int) 2348203548766647239LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (234512697894586815ULL) : (((/* implicit */unsigned long long int) -5178341695113256572LL))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                arr_18 [i_4] [i_4] = ((/* implicit */long long int) ((int) ((760442137U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_3))))) ? (760442133U) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13)))));
                arr_19 [19ULL] [i_4] = ((/* implicit */signed char) ((unsigned char) var_10));
            }
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_24 |= ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) 2650186346626616113ULL)))));
                var_25 = ((/* implicit */unsigned int) var_6);
            }
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_8] [i_8] [i_7] [i_0] [i_0] &= max(((~(max((var_7), (((/* implicit */unsigned long long int) (unsigned short)52356)))))), (max(((~(var_12))), (var_12))));
                    arr_28 [i_8] [i_8] [i_7] [21ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (short)-1436)))), (((/* implicit */int) ((short) 2971408096877477946ULL))))))));
                    /* LoopSeq 4 */
                    for (short i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))) : (2225638702010644025ULL));
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13945)) ? (18378947913325665106ULL) : (max((6951693616269193736ULL), (((/* implicit */unsigned long long int) var_10))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 1103976935225239896ULL)) ? (var_7) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_4))))) : (min((18378947913325665110ULL), (8784127710618287143ULL))));
                    }
                    for (short i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (18378947913325665088ULL)))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 25ULL))))) : (((/* implicit */int) ((short) 3534525160U)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 420734781U)) : (16221105371698907596ULL)))));
                        arr_33 [21U] [21U] [i_7] [21U] [i_8] [i_10] = ((/* implicit */_Bool) var_12);
                    }
                    for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (9007199187632128LL)));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 16221105371698907590ULL)) ? (((/* implicit */unsigned long long int) -2099623847)) : (16221105371698907587ULL)));
                        arr_38 [i_0] [i_4] [i_11] [i_8] [16U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)47))));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        arr_41 [i_0] [i_4] [i_7] [(unsigned short)9] [i_12] = ((/* implicit */unsigned long long int) var_4);
                        var_31 = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) (((~(11817600793252933104ULL))) ^ (((((/* implicit */_Bool) var_16)) ? (1099511103488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))))));
                        var_33 = ((/* implicit */unsigned int) var_6);
                    }
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_12))));
                }
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) (unsigned short)14167))), (((((/* implicit */_Bool) max((1945290280), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)8551)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) ((_Bool) 1099511103488ULL)))))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1073819509804551758LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40734))) : (2225638702010644025ULL))))) >> (((max((var_7), (((/* implicit */unsigned long long int) (unsigned short)24813)))) - (8832984828647948243ULL)))));
                    var_37 = ((/* implicit */unsigned short) max((max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4103)))))))))));
                }
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)115)) ? (((((/* implicit */_Bool) (short)-8872)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1571))) : (8163177142026364901ULL))) : (var_7))) : (min((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)55432))))), (((unsigned long long int) 1099511103505ULL)))))))));
                var_39 = ((/* implicit */unsigned int) 67796160383886506ULL);
                var_40 = ((/* implicit */short) ((_Bool) (_Bool)1));
                var_41 = ((/* implicit */unsigned int) ((short) (~(0ULL))));
            }
            for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 2) 
            {
                var_42 = ((/* implicit */signed char) 33030144);
                var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((12363263978249705849ULL) >> (((18446744073709551615ULL) - (18446744073709551588ULL))))))))));
                var_44 = ((/* implicit */short) ((unsigned long long int) var_9));
                var_45 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))));
            }
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) ^ (16221105371698907595ULL)));
            var_47 = ((/* implicit */unsigned long long int) (short)31427);
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                var_48 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) ((_Bool) 15131604872447734325ULL))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)35578)) : (var_14)))))));
                var_49 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25773))) <= (var_15))))))));
            }
        }
        var_50 = ((/* implicit */int) (-(min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((long long int) var_4)))))));
        var_51 &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34436))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551614ULL)) || (((/* implicit */_Bool) -344793338)))))));
    }
    for (long long int i_16 = 4; i_16 < 15; i_16 += 2) 
    {
        var_52 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) > (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13)))))));
        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-32740))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    /* vectorizable */
    for (long long int i_17 = 2; i_17 < 21; i_17 += 3) 
    {
        var_54 = -344793338;
        var_55 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_1)))));
    }
    var_56 = ((/* implicit */short) max((((/* implicit */int) (short)-31414)), ((-(((/* implicit */int) max((var_17), (var_16))))))));
}
