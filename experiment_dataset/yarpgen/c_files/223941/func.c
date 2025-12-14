/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223941
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
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3))))) ? (((((/* implicit */_Bool) (unsigned short)28205)) ? (((/* implicit */int) (unsigned short)32752)) : (((/* implicit */int) (unsigned short)23452)))) : (((((/* implicit */_Bool) (unsigned short)16485)) ? (((/* implicit */int) (unsigned short)63255)) : (((/* implicit */int) (unsigned short)11216)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13542)) ? (((/* implicit */int) (unsigned short)24757)) : (((/* implicit */int) (unsigned short)8190))))) ? (((((/* implicit */_Bool) (unsigned short)44988)) ? (((/* implicit */int) (unsigned short)5697)) : (((/* implicit */int) (unsigned short)33734)))) : (((((/* implicit */_Bool) (unsigned short)56971)) ? (((/* implicit */int) (unsigned short)49485)) : (((/* implicit */int) (unsigned short)16384))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_3 [(unsigned short)8] [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)17503)) : (((/* implicit */int) (unsigned short)13784))))) ? (((/* implicit */int) (unsigned short)48021)) : (((((((/* implicit */_Bool) (unsigned short)17485)) ? (((/* implicit */int) (unsigned short)59839)) : (((/* implicit */int) (unsigned short)17503)))) | (((/* implicit */int) (unsigned short)5697))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [(unsigned short)7] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)38537), ((unsigned short)0)))) ? (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (unsigned short)28788)) : (((/* implicit */int) (unsigned short)8404)))) : (((((/* implicit */_Bool) (unsigned short)52182)) ? (((/* implicit */int) (unsigned short)17289)) : (((/* implicit */int) (unsigned short)8557)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28309)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (unsigned short)25880))))) ? (((((/* implicit */_Bool) (unsigned short)6410)) ? (((/* implicit */int) (unsigned short)14933)) : (((/* implicit */int) (unsigned short)15)))) : (((/* implicit */int) (unsigned short)16376))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8565)) ? (((/* implicit */int) (unsigned short)8403)) : (((/* implicit */int) (unsigned short)59839))))) ? (max((((/* implicit */int) (unsigned short)65411)), (((((/* implicit */_Bool) (unsigned short)25514)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)16567)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51933)) ? (((/* implicit */int) (unsigned short)24930)) : (((/* implicit */int) (unsigned short)27151))))) ? ((-(((/* implicit */int) (unsigned short)48029)))) : ((-(((/* implicit */int) (unsigned short)65527)))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                arr_18 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5594)) || (((/* implicit */_Bool) (unsigned short)56971))))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)8562)) < (((/* implicit */int) (unsigned short)36550)))))));
                arr_19 [i_0 - 1] [(unsigned short)8] [i_5 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21955)) ? (((/* implicit */int) (unsigned short)59866)) : (((/* implicit */int) (unsigned short)57131))));
                var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)18798)));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4581)) ? (((/* implicit */int) (unsigned short)13382)) : (((/* implicit */int) (unsigned short)62380))))) ? (((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (unsigned short)36858)) : (((/* implicit */int) (unsigned short)65519)))) : (((/* implicit */int) (unsigned short)65513))));
                    arr_22 [(unsigned short)16] [i_6] [(unsigned short)18] [i_4 + 1] [(unsigned short)9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)16996))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)56971)) == (((/* implicit */int) (unsigned short)65525))))) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned short)42373)) : (((/* implicit */int) (unsigned short)18071))))));
                    arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31754)) ? (((/* implicit */int) (unsigned short)38684)) : (((/* implicit */int) (unsigned short)3434))));
                    arr_24 [(unsigned short)10] [i_0 - 1] [(unsigned short)13] [(unsigned short)10] [i_0 - 3] [(unsigned short)3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)13382)) ? (((/* implicit */int) (unsigned short)3790)) : (((/* implicit */int) (unsigned short)3434)))) * (((((/* implicit */_Bool) (unsigned short)43388)) ? (((/* implicit */int) (unsigned short)12222)) : (((/* implicit */int) (unsigned short)30692))))));
                }
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8858)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)46727)) : (((/* implicit */int) (unsigned short)28997)))) : (((((/* implicit */_Bool) (unsigned short)3434)) ? (((/* implicit */int) (unsigned short)56678)) : (((/* implicit */int) (unsigned short)0))))));
                    var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)13373)))) >= ((-(((/* implicit */int) (unsigned short)65521))))));
                    arr_27 [i_0] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59769)) ? (((/* implicit */int) (unsigned short)11865)) : (((/* implicit */int) (unsigned short)56500))))) ? (((((/* implicit */_Bool) (unsigned short)26367)) ? (((/* implicit */int) (unsigned short)45163)) : (((/* implicit */int) (unsigned short)8860)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)64061)) : (((/* implicit */int) (unsigned short)61730))))));
                }
            }
            for (unsigned short i_8 = 4; i_8 < 17; i_8 += 1) 
            {
                arr_31 [i_8] [(unsigned short)18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20883)) ? (((/* implicit */int) (unsigned short)55652)) : (((/* implicit */int) (unsigned short)56697))))) ? (((/* implicit */int) min(((unsigned short)8), ((unsigned short)26851)))) : ((~(((/* implicit */int) (unsigned short)39)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11771)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned short)8))))) ? (((((/* implicit */_Bool) (unsigned short)31078)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned short)61440)))) : (((((/* implicit */_Bool) (unsigned short)55223)) ? (((/* implicit */int) (unsigned short)18798)) : (((/* implicit */int) (unsigned short)65531))))))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_34 [i_9] [i_0 - 2] [i_0 - 2] [(unsigned short)3] [i_0 - 2] [i_9] = (unsigned short)8;
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40091)) ? (((/* implicit */int) (unsigned short)42243)) : (((/* implicit */int) (unsigned short)33767))))) ? (((/* implicit */int) (unsigned short)10974)) : (((/* implicit */int) (unsigned short)15246))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6934)) >> (((((/* implicit */int) (unsigned short)10087)) - (10083)))))) ? (((((/* implicit */_Bool) (unsigned short)36550)) ? (((/* implicit */int) (unsigned short)8858)) : (((/* implicit */int) (unsigned short)54463)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64720))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36223))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) < (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) (unsigned short)15311)) ? (((/* implicit */int) (unsigned short)32090)) : (((/* implicit */int) (unsigned short)5))))))));
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13402)) ? (max((((((/* implicit */int) (unsigned short)27386)) + (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min(((unsigned short)52153), ((unsigned short)65524)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8415)) ? (((/* implicit */int) (unsigned short)61730)) : (((/* implicit */int) (unsigned short)33611))))) ? (((((/* implicit */_Bool) (unsigned short)33604)) ? (((/* implicit */int) (unsigned short)60937)) : (((/* implicit */int) (unsigned short)65530)))) : ((-(((/* implicit */int) (unsigned short)15303))))))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                arr_39 [(unsigned short)6] [(unsigned short)6] [i_4 + 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8176)) ? (((/* implicit */int) (unsigned short)50220)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65513)))) : (((((/* implicit */_Bool) (unsigned short)34590)) ? (((/* implicit */int) (unsigned short)13618)) : (((/* implicit */int) (unsigned short)23208))))));
                var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)31948)) ? (((/* implicit */int) (unsigned short)58555)) : (((/* implicit */int) (unsigned short)55629))))));
                arr_40 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)36557)) : (((/* implicit */int) (unsigned short)52154))))) ? (((((/* implicit */_Bool) (unsigned short)62203)) ? (((/* implicit */int) (unsigned short)50225)) : (((/* implicit */int) (unsigned short)54876)))) : (((((/* implicit */_Bool) (unsigned short)12951)) ? (((/* implicit */int) (unsigned short)28979)) : (((/* implicit */int) (unsigned short)3795))))));
            }
            arr_41 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)61728)), (((((/* implicit */_Bool) (unsigned short)48275)) ? (((((/* implicit */_Bool) (unsigned short)9881)) ? (((/* implicit */int) (unsigned short)18298)) : (((/* implicit */int) (unsigned short)2972)))) : (((/* implicit */int) (unsigned short)23))))));
        }
    }
    for (unsigned short i_11 = 1; i_11 < 21; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4366)))))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            arr_47 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26104)) ? (((/* implicit */int) (unsigned short)33446)) : (((/* implicit */int) (unsigned short)61727))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned short)9672))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61744))))))) * (((((/* implicit */_Bool) (unsigned short)3806)) ? (((((/* implicit */_Bool) (unsigned short)36554)) ? (((/* implicit */int) (unsigned short)25513)) : (((/* implicit */int) (unsigned short)23)))) : (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)20604)) : (((/* implicit */int) (unsigned short)45321))))))));
            arr_48 [i_11] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)9672)) ? (((/* implicit */int) (unsigned short)36557)) : (((/* implicit */int) (unsigned short)45512)))) != (((((/* implicit */_Bool) (unsigned short)18708)) ? (((/* implicit */int) (unsigned short)59888)) : (((/* implicit */int) (unsigned short)29341)))))) ? (((/* implicit */int) (unsigned short)51967)) : ((-((-(((/* implicit */int) (unsigned short)40473))))))));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                arr_53 [(unsigned short)3] [i_12 - 1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */int) (unsigned short)28979)) : (max(((~(((/* implicit */int) (unsigned short)59898)))), ((-(((/* implicit */int) (unsigned short)448))))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)55863)) || (((/* implicit */_Bool) (unsigned short)26104)))) ? (((/* implicit */int) max(((unsigned short)34203), ((unsigned short)3795)))) : (((((/* implicit */int) (unsigned short)32760)) | (((/* implicit */int) (unsigned short)33594)))))), (((((((/* implicit */_Bool) (unsigned short)12367)) ? (((/* implicit */int) (unsigned short)3816)) : (((/* implicit */int) (unsigned short)36539)))) | (((/* implicit */int) (unsigned short)5648)))))))));
            }
            for (unsigned short i_14 = 2; i_14 < 20; i_14 += 4) 
            {
                arr_56 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)36269)) ? (((((((/* implicit */_Bool) (unsigned short)39426)) ? (((/* implicit */int) (unsigned short)59871)) : (((/* implicit */int) (unsigned short)55255)))) / (((/* implicit */int) min(((unsigned short)54076), ((unsigned short)21200)))))) : (((((((/* implicit */_Bool) (unsigned short)14165)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)9675)))) / (((((/* implicit */_Bool) (unsigned short)61745)) ? (((/* implicit */int) (unsigned short)4366)) : (((/* implicit */int) (unsigned short)21565))))))));
                var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26083)) ? (((/* implicit */int) (unsigned short)6136)) : (((/* implicit */int) (unsigned short)14165))))) ? (((((/* implicit */_Bool) (unsigned short)9683)) ? (((/* implicit */int) (unsigned short)21975)) : (((/* implicit */int) (unsigned short)46665)))) : (((((/* implicit */_Bool) (unsigned short)3795)) ? (((/* implicit */int) (unsigned short)37932)) : (((/* implicit */int) (unsigned short)4330))))))));
            }
        }
        arr_57 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)5648)) ? (((/* implicit */int) (unsigned short)51373)) : (((/* implicit */int) (unsigned short)51354)))), (((((/* implicit */_Bool) (unsigned short)61145)) ? (((/* implicit */int) (unsigned short)21360)) : (((/* implicit */int) (unsigned short)43284)))))))));
    }
    var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6318)) ? (((/* implicit */int) (unsigned short)33604)) : (((/* implicit */int) (unsigned short)19108))))) ? (((/* implicit */int) min(((unsigned short)22642), ((unsigned short)59888)))) : (((/* implicit */int) (unsigned short)6))))));
    var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)31932)));
}
